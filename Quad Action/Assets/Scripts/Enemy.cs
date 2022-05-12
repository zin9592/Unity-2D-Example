using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public int _maxHealth;
    public int _curHealth;
    public Transform _target;
    public bool _isChase;

    Rigidbody _rigidbody;
    BoxCollider _boxCollider;
    Material _material;
    NavMeshAgent _navMeshAgent;
    Animator _animator;

    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _boxCollider = GetComponent<BoxCollider>();
        _material = GetComponentInChildren<MeshRenderer>().material;
        _navMeshAgent = GetComponent<NavMeshAgent>();
        _animator = GetComponentInChildren<Animator>();

        Invoke("ChaseStart", 2);
    }

    void ChaseStart()
    {
        _isChase = true;
        _animator.SetBool("isWalk", true);
    }

    void Update()
    {
        if (_isChase)
        {
            // 도착할 목표 위치 지정 함수
            _navMeshAgent.SetDestination(_target.position);
        }
    }

    void FixedUpdate()
    {
        FreezeVelocity();    
    }
    void FreezeVelocity()
    {
        if (_isChase)
        {
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Melee")
        {
            Weapon weapon = other.GetComponent<Weapon>();
            _curHealth -= weapon._damage;
            Vector3 reactVec = transform.position - other.transform.position;

            StartCoroutine(OnDamage(reactVec,false));
        }
        else if (other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            _curHealth -= bullet._damage;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(reactVec, false));
        }
    }

    IEnumerator OnDamage(Vector3 reactVec, bool isGrenade)
    {
        _material.color = Color.red;
        yield return new WaitForSeconds(0.1f);

        if (_curHealth > 0)
        {
            _material.color = Color.white;
        }
        else
        {
            // Enemy Dead
            _material.color = Color.gray;
            gameObject.layer = 13;
            _isChase = false;
            _navMeshAgent.enabled = false;
            _animator.SetTrigger("doDie");

            if (isGrenade)
            {
                reactVec = reactVec.normalized;
                reactVec += Vector3.up * 3;

                _rigidbody.freezeRotation = false;
                _rigidbody.AddForce(reactVec * 5, ForceMode.Impulse);
                _rigidbody.AddTorque(reactVec * 15, ForceMode.Impulse);
            }
            else
            {
                reactVec = reactVec.normalized;
                reactVec += Vector3.up;
                _rigidbody.AddForce(reactVec * 10, ForceMode.Impulse);
            }
            Destroy(gameObject, 4f);
        }

    }

    public void HitByGrenade(Vector3 explosionPos)
    {
        _curHealth -= 100;
        Vector3 reactVec = transform.position - explosionPos;
        StartCoroutine(OnDamage(reactVec, true));
    }
}
