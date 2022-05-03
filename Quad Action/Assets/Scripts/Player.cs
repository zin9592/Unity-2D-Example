using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    //Player
    public float _speed;
    public float _jumpPower;
    public GameObject[] _weapons;
    public bool[] _hasWeapons;
    public GameObject[] _grenades;

    //Item
    public int _ammo;
    public int _coin;
    public int _health;
    public int _hasGrenades;

    //Max Item
    public int _maxAmmo;
    public int _maxCoin;
    public int _maxHealth;
    public int _maxHasGrenades;

    //MoveVector
    float _hAxis;
    float _vAxis;

    //Input
    bool _wDown;
    bool _jDown;
    bool _fDown;
    bool _iDown;
    bool _sDown1;
    bool _sDown2;
    bool _sDown3;

    //Animator Flag
    bool _isJump;
    bool _isDodge;
    bool _isSwap;
    bool _isFireReady = true;

    Vector3 _moveVector;
    Vector3 _dodgeVector;
    Animator _animator;
    Rigidbody _rigidbody;
    GameObject _nearObject;
    Weapon _equipWeapon;

    //Equip Weapon Index
    int _equipWeaponIndex = -1;

    //Fire Delay;
    float _fireDelay;

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
        Attack();
        Dodge();
        Swap();
        Interaction();
    }

    void GetInput()
    {
        // Get Input
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");
        _wDown = Input.GetButton("Walk");
        _jDown = Input.GetButtonDown("Jump");
        _fDown = Input.GetButtonDown("Fire1");
        _iDown = Input.GetButtonDown("Interaction");
        _sDown1 = Input.GetButtonDown("Swap1");
        _sDown2 = Input.GetButtonDown("Swap2");
        _sDown3 = Input.GetButtonDown("Swap3");
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

        if (_isSwap || !_isFireReady)
        {
            _moveVector = Vector3.zero;
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
        if (_jDown && _moveVector == Vector3.zero && !_isJump && !_isDodge && !_isSwap)
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

    void Attack()
    {
        if (_equipWeapon == null)
        {
            return;
        }

        _fireDelay += Time.deltaTime;

        _isFireReady = _equipWeapon._rate < _fireDelay;

        if(_fDown && _isFireReady && !_isDodge && !_isSwap)
        {
            _equipWeapon.Use();
            _animator.SetTrigger("doSwing");
            _fireDelay = 0;
        }
    }

    // 조건
    // 방향키 + 점프키를 누를 시 회피
    void Dodge()
    {
        if (_jDown && _moveVector != Vector3.zero && !_isJump && !_isDodge && !_isSwap)
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

    void Swap()
    {
        if (_sDown1 && (!_hasWeapons[0] || _equipWeaponIndex == 0))
        {
            return;
        }
        if (_sDown2 && (!_hasWeapons[1] || _equipWeaponIndex == 1))
        {
            return;
        }
        if (_sDown3 && (!_hasWeapons[2] || _equipWeaponIndex == 2))
        {
            return;
        }

        int weaponIndex = -1;
        if (_sDown1) weaponIndex = 0;
        if (_sDown2) weaponIndex = 1;
        if (_sDown3) weaponIndex = 2;

        if ((_sDown1 || _sDown2 || _sDown3) && !_isJump && !_isDodge)
        {
            if (_equipWeapon != null)
            {
                _equipWeapon.gameObject.SetActive(false);
            }
            _equipWeapon = _weapons[weaponIndex].GetComponent<Weapon>();
            _equipWeaponIndex = weaponIndex;
            _equipWeapon.gameObject.SetActive(true);

            _animator.SetTrigger("doSwap");
            _isSwap = true;

            Invoke("SwapOut", 0.4f);
        }
    }

    void SwapOut()
    {
        _isSwap = false;
    }

    // 상호작용
    void Interaction()
    {
        if (_iDown && _nearObject != null && !_isJump && !_isDodge)
        {
            if (_nearObject.tag == "Weapon")
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

    void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Item")
        {
            Item item = other.GetComponent<Item>();
            switch (item.type)
            {
                case Item.Type.Ammo:
                    _ammo += item.value;
                    if(_ammo > _maxAmmo)
                    {
                        _ammo = _maxAmmo;
                    }
                    break;
                case Item.Type.Coin:
                    _coin += item.value;
                    if(_coin > _maxCoin)
                    {
                        _coin = _maxCoin;
                    }
                    break;
                case Item.Type.Heart:
                    _health += item.value;
                    if(_health > _maxHealth)
                    {
                        _health = _maxHealth;
                    }
                    break;
                case Item.Type.Grenade:
                    if (_hasGrenades == _maxHasGrenades)
                    {
                        break;
                    }
                    _grenades[_hasGrenades].SetActive(true);
                    _hasGrenades += item.value;
                    break;
            }
            Destroy(other.gameObject);
        }    
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Weapon")
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
