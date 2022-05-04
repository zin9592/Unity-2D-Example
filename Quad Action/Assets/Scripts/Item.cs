using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public enum Type { Ammo, Coin, Grenade, Heart, Weapon };
    public Type _type;   // 아이템의 타입
    public int _value;   // 아이템의 양

    Rigidbody _rigid;
    SphereCollider _sphereCollider;

    void Awake()
    {
        _rigid = GetComponent<Rigidbody>();
        _sphereCollider = GetComponents<SphereCollider>()[0];
    }

    void Update()
    {
        transform.Rotate(Vector3.up * 20 * Time.deltaTime);    
    }

    void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Floor")
        {
            _rigid.isKinematic = true;
            _sphereCollider.enabled = false;
        }
    }
}
