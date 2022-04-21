using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float _speed;
    float _hAxis;
    float _vAxis;

    Vector3 _moveVector;
    Animator animator;
    bool wDown;

    void Awake()
    {
        animator = GetComponentInChildren<Animator>();
    }


    void Update()
    {
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");
        wDown = Input.GetButton("Walk");

        _moveVector = new Vector3(_hAxis, 0, _vAxis).normalized;

        transform.position += _moveVector * _speed * (wDown == true ? 0.3f:1) * Time.deltaTime;

        animator.SetBool("isRun", _moveVector != Vector3.zero);
        animator.SetBool("isWalk", wDown);

        transform.LookAt(transform.position + _moveVector);
    }
}
