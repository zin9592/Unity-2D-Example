using System;
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
    public GameObject _grenadeObject;
    public Camera followCamera;
    public GameManager _gameManager;

    //Sound
    public AudioSource _WalkSound;
    public AudioSource _jumpSound;
    public AudioSource _damagedSound;
    public AudioSource _hammerSound;
    public AudioSource _handGunSound;
    public AudioSource _subMachineGunSound;
    public AudioSource _coinSound;
    public AudioSource _menuSound;
    public AudioSource _ShopOpenSound;
    public AudioSource _stageClearSound;
    public bool _isWalk;

    public enum SoundType
    {
        Walk, Jump, Damage, Hammer, HandGun, SubMachineGun, Coin, Menu, Shop, StageClear
    }

    //Item
    public int _ammo;
    public int _coin;
    public int _health;
    public int _hasGrenades;
    public int _score;

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
    bool _rDown;
    bool _iDown;
    bool _gDown;
    bool _sDown1;
    bool _sDown2;
    bool _sDown3;

    //Animator Flag
    bool _isJump;
    bool _isDodge;
    bool _isSwap;
    bool _isReload;
    bool _isFireReady = true;
    bool _isBorder;
    bool _isShop;
    bool _isDead;

    //무적타임
    bool _isDamage;

    Vector3 _moveVector;
    Vector3 _dodgeVector;
    Animator _animator;
    Rigidbody _rigidbody;
    GameObject _nearObject;
    public Weapon _equipWeapon;
    MeshRenderer[] _meshRenderers;

    //Equip Weapon Index
    int _equipWeaponIndex = -1;

    //Fire Delay;
    float _fireDelay;

    void Awake()
    {
        _animator = GetComponentInChildren<Animator>();
        _rigidbody = GetComponent<Rigidbody>();
        _meshRenderers = GetComponentsInChildren<MeshRenderer>();
    }


    void Update()
    {
        GetInput();
        Move();
        Turn();
        Jump();
        Grenade();
        Attack();
        Reload();
        Dodge();
        Swap();
        Interaction();
    }

    public void SoundPlay(SoundType _type)
    {
        switch (_type)
        {
            case SoundType.Jump:
                _jumpSound.Play();
                break;
            case SoundType.Walk:
                _WalkSound.Play();
                break;
            case SoundType.Damage:
                _damagedSound.Play();
                break;
            case SoundType.Hammer:
                _hammerSound.Play();
                break;
            case SoundType.HandGun:
                _handGunSound.Play();
                break;
            case SoundType.SubMachineGun:
                _subMachineGunSound.Play();
                break;
            case SoundType.Coin:
                _coinSound.Play();
                break;
            case SoundType.Shop:
                _ShopOpenSound.Play();
                break;
            case SoundType.Menu:
                _menuSound.Play();
                break;
            case SoundType.StageClear:
                _stageClearSound.Play();
                break;

        }
    }

    void Grenade()
    {
        if (_hasGrenades == 0)
        {
            return;
        }

        if (_gDown && !_isReload && !_isSwap && !_isDead)
        {
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit raycastHit;
            if (Physics.Raycast(ray, out raycastHit, 100))
            {
                Vector3 nextVec = raycastHit.point - transform.position;
                nextVec.y = 10;

                GameObject instantGrenade = Instantiate(_grenadeObject, transform.position, transform.rotation);
                Rigidbody rigidbody = instantGrenade.GetComponent<Rigidbody>();
                rigidbody.AddForce(nextVec, ForceMode.Impulse);
                rigidbody.AddTorque(Vector3.back * 10, ForceMode.Impulse);

                _hasGrenades--;
                _grenades[_hasGrenades].SetActive(false);
            }
        }
    }

    void FreezeRotation()
    {
        // 캐릭터가 물리충돌시 무한회전 해버리는 버그 방지용
        _rigidbody.angularVelocity = Vector3.zero;
    }

    void StopToWall()
    {
        // 캐릭터가 벽을 뚫는 것을 방지
        Debug.DrawRay(transform.position, transform.forward * 5, Color.green);
        _isBorder = Physics.Raycast(transform.position, transform.forward, 5, LayerMask.GetMask("Wall"));
    }

    void FixedUpdate()
    {
        FreezeRotation();
        StopToWall();
    }

    void GetInput()
    {
        // Get Input
        _hAxis = Input.GetAxisRaw("Horizontal");
        _vAxis = Input.GetAxisRaw("Vertical");
        _wDown = Input.GetButton("Walk");
        _jDown = Input.GetButtonDown("Jump");
        _fDown = Input.GetButton("Fire1");
        _gDown = Input.GetButtonDown("Fire2");
        _rDown = Input.GetButtonDown("Reload");
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

        if (_isSwap || !_isFireReady || _isReload || _isDead)
        {
            _moveVector = Vector3.zero;
        }

        if (!_isBorder)
        {
            // Move
            transform.position += _moveVector * _speed * (_wDown == true ? 0.3f : 1) * Time.deltaTime;
        }
        // Animator Trigger
        _animator.SetBool("isRun", _moveVector != Vector3.zero);
        _animator.SetBool("isWalk", _wDown);
        if (!_isWalk && _wDown && _moveVector != Vector3.zero && !_isJump && !_isDodge)
        {
            Invoke("WalkOut", 0.8f);
            _isWalk = true;
            SoundPlay(SoundType.Walk);
        }else if (!_isWalk && !_wDown && _moveVector != Vector3.zero && !_isJump && !_isDodge)
        {
            Invoke("WalkOut", 0.2f);
            _isWalk = true;
            SoundPlay(SoundType.Walk);
        }
    }

    void WalkOut()
    {
        _isWalk = false;
    }

    void Turn()
    {
        // 1. 키보드에 의한 회전
        transform.LookAt(transform.position + _moveVector);

        // 2. 마우스에 의한 회전
        if (_fDown && !_isDead)
        {
            if (!_isFireReady && _equipWeapon._type == Weapon.Type.Melee)
            {
                return;
            }
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit raycastHit;
            if (Physics.Raycast(ray, out raycastHit, 100))
            {
                Vector3 nextVec = raycastHit.point - transform.position;
                nextVec.y = 0;
                transform.LookAt(transform.position + nextVec);
            }
        }
    }

    // 조건
    // 제자리에서 점프키를 누를 시 점프
    void Jump()
    {
        if (_jDown && _moveVector == Vector3.zero && !_isJump && !_isDodge && !_isSwap && !_isReload && !_isShop && !_isDead)
        {
            // Jump Force
            _rigidbody.AddForce(Vector3.up * _jumpPower, ForceMode.Impulse);

            // Animator Trigger 
            _animator.SetBool("isJump", true);
            _animator.SetTrigger("doJump");

            // Jump
            _isJump = true;

            SoundPlay(SoundType.Jump);
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

        if (_fDown && _isFireReady && !_isDodge && !_isSwap && !_isShop && !_isDead)
        {
            switch (_equipWeapon.gameObject.name)
            {
                case "Weapon Hammer":
                    SoundPlay(SoundType.Hammer);
                    break;
                case "Weapon HandGun":
                    if (_equipWeapon._curAmmo != 0)
                    {
                        SoundPlay(SoundType.HandGun);
                    }
                    break;
                case "Weapon SubMachineGun":
                    if (_equipWeapon._curAmmo != 0)
                    {
                        SoundPlay(SoundType.SubMachineGun);
                    }
                    break;
            }
            _equipWeapon.Use();
            _animator.SetTrigger(_equipWeapon._type == Weapon.Type.Melee ? "doSwing" : "doShot");
            _fireDelay = 0;
        }
    }

    void Reload()
    {
        // Limit 1. No Weapon
        if (_equipWeapon == null)
        {
            return;
        }
        // Limit 2. Melee Weapon
        if (_equipWeapon._type == Weapon.Type.Melee)
        {
            return;
        }
        // Limit 3. No Ammo
        if (_ammo == 0)
        {
            return;
        }

        if (_rDown && !_isJump && !_isDodge && !_isSwap && _isFireReady && !_isShop && !_isReload && !_isDead)
        {
            _animator.SetTrigger("doReload");
            _isReload = true;
            Invoke("ReloadOut", 1.5f);
        }
    }

    void ReloadOut()
    {
        int reloadAmmo = _equipWeapon._maxAmmo > _ammo ? _ammo : _equipWeapon._maxAmmo;
        _equipWeapon._curAmmo = reloadAmmo;
        _ammo -= reloadAmmo;
        _isReload = false;
    }

    // 조건
    // 방향키 + 점프키를 누를 시 회피
    void Dodge()
    {
        if (_jDown && _moveVector != Vector3.zero && !_isJump && !_isDodge && !_isSwap && !_isShop && !_isDead)
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

        if ((_sDown1 || _sDown2 || _sDown3) && !_isJump && !_isDodge && !_isShop && !_isDead)
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
        if (_iDown && _nearObject != null && !_isJump && !_isDodge && !_isDead)
        {
            if (_nearObject.tag == "Weapon")
            {
                //Item Information
                Item item = _nearObject.GetComponent<Item>();
                int weaponIndex = item._value;

                //Get Weapon
                _hasWeapons[weaponIndex] = true;

                //Field Item Destroy
                Destroy(_nearObject);
            }
            else if (_nearObject.tag == "Shop")
            {
                Shop shop = _nearObject.GetComponent<Shop>();
                shop.Enter(this);
                _isShop = true;
                SoundPlay(SoundType.Shop);
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
        if (other.tag == "Item")
        {
            Item item = other.GetComponent<Item>();
            switch (item._type)
            {
                case Item.Type.Ammo:
                    _ammo += item._value;
                    if (_ammo > _maxAmmo)
                    {
                        _ammo = _maxAmmo;
                    }
                    break;
                case Item.Type.Coin:
                    _coin += item._value;
                    SoundPlay(SoundType.Coin);
                    if (_coin > _maxCoin)
                    {
                        _coin = _maxCoin;
                    }
                    break;
                case Item.Type.Heart:
                    _health += item._value;
                    if (_health > _maxHealth)
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
                    _hasGrenades += item._value;
                    break;
            }
            Destroy(other.gameObject);
        }
        else if (other.tag == "EnemyBullet")
        {
            if (!_isDamage)
            {
                Bullet enemyBullet = other.GetComponent<Bullet>();
                _health -= enemyBullet._damage;

                bool isBossAtk = other.gameObject.name == "Boss Melee Area";

                StartCoroutine(OnDamage(isBossAtk));
            }
            if (other.GetComponent<Rigidbody>() != null)
            {
                Destroy(other.gameObject);
            }


        }
    }

    IEnumerator OnDamage(bool isBoosAtk)
    {
        _isDamage = true;
        SoundPlay(SoundType.Damage);

        foreach (MeshRenderer mesh in _meshRenderers)
        {
            mesh.material.color = Color.yellow;
        }

        if (isBoosAtk)
        {
            _rigidbody.AddForce(transform.forward * -25, ForceMode.Impulse);
        }

        if (_health <= 0 && !_isDead)
        {
            //Game Over
            OnDie();
        }

        yield return new WaitForSeconds(1f);
        _isDamage = false;
        foreach (MeshRenderer mesh in _meshRenderers)
        {
            mesh.material.color = Color.white;
        }

        if (isBoosAtk)
        {
            _rigidbody.velocity = Vector3.zero;
        }
    }

    void OnDie()
    {
        _animator.SetTrigger("doDie");
        _isDead = true;
        gameObject.layer = 16;
        _gameManager.GameOver();
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Weapon" || other.tag == "Shop")
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
        else if (other.tag == "Shop")
        {
            Shop shop = other.GetComponent<Shop>();
            shop.Exit();
            _isShop = false;
            _nearObject = null;
        }
    }
}
