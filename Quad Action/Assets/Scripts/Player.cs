using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float _speed;
    public float _jumpPower;
    public GameObject[] _weapon;
    public bool[] _hasWeapons;

    float _hAxis;
    float _vAxis;
    bool _wDown;
    bool _jDown;
    bool _iDown;
    bool _isJump;
    bool _isDodge;

    Vector3 _moveVector;
    Vector3 _dodgeVector;
    Animator _animator;
    Rigidbody _rigidbody;

    GameObject _nearObject;

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
        Dodge();
        Interaction();
    }

    void GetInput()
    {
        // Get Input
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");
        _wDown = Input.GetButton("Walk");
        _jDown = Input.GetButtonDown("Jump");
        _iDown = Input.GetButtonDown("Interaction");
    }

    void Move()
    {
        // Player moveVector
        _moveVector = new Vector3(_hAxis, 0, _vAxis).normalized;

        // isDodge?
        if (_isDodge)
        {
            _moveVector = _dodgeVector;
        }

        // Move
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

    // 조건
    // 제자리에서 점프키를 누를 시 점프
    void Jump()
    {
        if (_jDown && _moveVector == Vector3.zero && !_isJump && !_isDodge)
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

    // 조건
    // 방향키 + 점프키를 누를 시 회피
    void Dodge()
    {
        if (_jDown && _moveVector != Vector3.zero && !_isJump && !_isDodge)
        {
            _dodgeVector = _moveVector;
            _speed *= 2;
            _animator.SetTrigger("doDodge");
            _isDodge = true;
            Invoke("DodgeOut", 0.4f);
        }
    }

    void DodgeOut()
    {
        _speed *= 0.5f;
        _isDodge = false;
    }

    // 상호작용
    void Interaction()
    {
        if (_iDown && _nearObject != null && !_isJump && !_isDodge)
        {
            if(_nearObject.tag == "Weapon")
            {
                //Item Information
                Item item = _nearObject.GetComponent<Item>();
                int weaponIndex = item.value;

                //Get Weapon
                _hasWeapons[weaponIndex] = true;
                
                //Field Item Destroy
                Destroy(_nearObject);
            }
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            // Animator Trigger 
            _animator.SetBool("isJump", false);

            // Land
            _isJump = false;

        }
    }

    void OnTriggerStay(Collider other)
    {
        if(other.tag == "Weapon")
        {
            _nearObject = other.gameObject;
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag == "Weapon")
        {
            _nearObject = null;
        }
    }
}
