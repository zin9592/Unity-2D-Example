using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public int _maxHealth;
    public int _curHealth;

    Rigidbody _rigidbody;
    BoxCollider _boxCollider;
    Material material;

    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _boxCollider = GetComponent<BoxCollider>();
        material = GetComponent<MeshRenderer>().material;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Melee")
        {
            Weapon weapon = other.GetComponent<Weapon>();
            _curHealth -= weapon._damage;
            Vector3 reactVec = transform.position - other.transform.position;

            StartCoroutine(OnDamage(reactVec));
        }
        else if (other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            _curHealth -= bullet._damage;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(reactVec));
        }
    }

    IEnumerator OnDamage(Vector3 reactVec)
    {
        material.color = Color.red;
        yield return new WaitForSeconds(0.1f);

        if (_curHealth > 0)
        {
            material.color = Color.white;
        }
        else
        {
            // Enemy Dead
            material.color = Color.gray;
            Destroy(gameObject, 4f);

            reactVec = reactVec.normalized;
            reactVec += Vector3.up;
            _rigidbody.AddForce(reactVec * 10, ForceMode.Impulse);

            gameObject.layer = 13;
        }

    }

    public void HitByGrenade(Vector3 explosionPos)
    {
        _curHealth -= 100;
        Vector3 reactVec = transform.position - explosionPos;
        StartCoroutine(OnDamage(reactVec));
    }
}
