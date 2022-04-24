using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float _speed;
    public float _jumpPower;
    float _hAxis;
    float _vAxis;
    bool _wDown;
    bool _jDown;
    bool _isJump;

    Vector3 _moveVector;
    Animator _animator;
    Rigidbody _rigidbody;

    void Awake()
    {
        _animator = GetComponentInChildren<Animator>();
        _rigidbody = GetComponent<Rigidbody>();
    }


    void Update()
    {
        GetInput();
        Move();
        Turn();
        Jump();
    }

    void GetInput()
    {
        // Get Input
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");
        _wDown = Input.GetButton("Walk");
        _jDown = Input.GetButtonDown("Jump");
    }

    void Move()
    {
        // Player Move
        _moveVector = new Vector3(_hAxis, 0, _vAxis).normalized;
        transform.position += _moveVector * _speed * (_wDown == true ? 0.3f : 1) * Time.deltaTime;

        // Animator Trigger
        _animator.SetBool("isRun", _moveVector != Vector3.zero);
        _animator.SetBool("isWalk", _wDown);
    }

    void Turn()
    {
        // Turn Player
        transform.LookAt(transform.position + _moveVector);
    }

    void Jump()
    {
        if (_jDown && !_isJump)
        {
            // Jump Force
            _rigidbody.AddForce(Vector3.up * _jumpPower, ForceMode.Impulse);
            
            // Animator Trigger 
            _animator.SetBool("isJump", true);
            _animator.SetTrigger("doJump");

            // Jump
            _isJump = true;
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Floor")
        {
            // Animator Trigger 
            _animator.SetBool("isJump", false);

            // Land
            _isJump = false;

        }
    }
}
