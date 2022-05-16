using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int _damage;
    public bool _isMelee;

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            // 탄피 삭제 (3초후)
            Destroy(gameObject, 3f);
        }
    }

    void OnTriggerEnter(Collider other)
    {
         if (!_isMelee && other.gameObject.tag == "Wall")
        {
            // 총알 삭제
            Destroy(gameObject);
        }
    }
}
