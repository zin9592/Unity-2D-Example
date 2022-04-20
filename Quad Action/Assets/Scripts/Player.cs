using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float _speed;
    float _hAxis;
    float _vAxis;

    Vector3 _moveVector;

    void Start()
    {
        
    }


    void Update()
    {
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");

        _moveVector = new Vector3(_hAxis, 0, _vAxis).normalized;

        transform.position += _moveVector * _speed * Time.deltaTime;
    }
}
