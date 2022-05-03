using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int _damage;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            // ź�� ���� (3����)
            Destroy(gameObject, 3f);
        } else if (collision.gameObject.tag == "Wall")
        {
            // �Ѿ� ����
            Destroy(gameObject);
        }
    }
}
