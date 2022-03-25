using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public string _type;
    public float _moveSpeed;
    Rigidbody2D _rigid;

    void Awake()
    {
        _rigid = GetComponent<Rigidbody2D>();
        _rigid.velocity = Vector2.down * _moveSpeed;
    }
}
