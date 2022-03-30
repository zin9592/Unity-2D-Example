using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    // 플레이어
    public float _moveSpeed;
    public int _life;
    public int _score;
    public bool _isHit;

    // 경계선
    public bool _isTouchTop;
    public bool _isTouchBottom;
    public bool _isTouchLeft;
    public bool _isTouchRight;

    // 발사체
    public float _bulletSpeed;
    public int _bulletPower;
    public int _bulletMaxPower;
    public float _curShotDelay;         // 한발쏜 다음 충전되기 위한 딜레이
    public float _maxShotDelay;         // 실제 딜레이

    // 발사체 오브젝트
    public GameObject _bulletObjA;
    public GameObject _bulletObjB;

    // Boom
    public int _boom;
    public int _maxBoom;
    public bool _isBoomTime;

    // Boom 오브젝트
    public GameObject _boomEffect;

    // Manager
    public GameManager _gameManager;
    public ObjectManager _objectManager;

    Animator _animator;

    void Awake()
    {
        _animator = GetComponent<Animator>();
        _gameManager.UpdateBoomIcon(_boom);
    }

    void Update()
    {
        Move();
        Fire();
        Boom();
        Reload();
    }

    void Move()
    {
        float h = Input.GetAxisRaw("Horizontal");   // 수평
        if ((_isTouchRight && h == 1) || (_isTouchLeft && h == -1))
        {
            h = 0;
        }
        float v = Input.GetAxisRaw("Vertical");     // 수직
        if ((_isTouchTop && v == 1) || (_isTouchBottom && v == -1))
        {
            v = 0;
        }
        Vector3 curPos = transform.position;        // 현재위치
        Vector3 nextPos = new Vector3(h, v, 0) * _moveSpeed * Time.deltaTime;

        transform.position = curPos + nextPos;

        if (Input.GetButtonDown("Horizontal") || Input.GetButtonUp("Horizontal"))
        {
            _animator.SetInteger("Input", (int)h);
        }
    }

    void Fire()
    {

        if (!Input.GetButton("Fire1"))
        {
            return;
        }

        if (_curShotDelay < _maxShotDelay)
        {
            return;
        }

        switch (_bulletPower)
        {
            case 1:
                // Power 1

                GameObject bullet = _objectManager.MakeObject("BulletPlayerA");
                bullet.transform.position = transform.position;

                Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
                rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 2:
                // Power 2 : Double Shot
                GameObject doubleBulletL = _objectManager.MakeObject("BulletPlayerA");
                doubleBulletL.transform.position = transform.position + Vector3.left * 0.1f;
                GameObject doubleBulletR = _objectManager.MakeObject("BulletPlayerA");
                doubleBulletR.transform.position = transform.position + Vector3.right * 0.1f;
                Rigidbody2D doubleBulletRigidL = doubleBulletL.GetComponent<Rigidbody2D>();
                Rigidbody2D doubleBulletRigidR = doubleBulletR.GetComponent<Rigidbody2D>();
                doubleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                doubleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 3:
                // Power 3 : Triple Shot
                GameObject TripleBulletL = _objectManager.MakeObject("BulletPlayerA");
                TripleBulletL.transform.position = transform.position + Vector3.left * 0.4f;
                GameObject TripleBulletC = _objectManager.MakeObject("BulletPlayerB");
                TripleBulletC.transform.position = transform.position;
                GameObject TripleBulletR = _objectManager.MakeObject("BulletPlayerA");
                TripleBulletR.transform.position = transform.position + Vector3.right * 0.4f;
                Rigidbody2D TripleBulletRigidL = TripleBulletL.GetComponent<Rigidbody2D>();
                Rigidbody2D TripleBulletRigidC = TripleBulletC.GetComponent<Rigidbody2D>();
                Rigidbody2D TripleBulletRigidR = TripleBulletR.GetComponent<Rigidbody2D>();
                TripleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                TripleBulletRigidC.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                TripleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
        }
        _curShotDelay = 0;
    }

    void Boom()
    {
        // Fire2 버튼을 안눌렀는가?
        if (!Input.GetButton("Fire2"))
        {
            return;
        }

        // 폭탄을 이미 사용중인가?
        if (_isBoomTime)
        {
            return;
        }

        if (_boom == 0)
        {
            return;
        }

        // #1, Effect visible
        _boomEffect.SetActive(true);
        _isBoomTime = true;
        _boom--;
        _gameManager.UpdateBoomIcon(_boom);
        Invoke("OffBoomEffect", 3f);
        Invoke("BoomDamage", 0.2f);

    }

    void Reload()
    {
        _curShotDelay += Time.deltaTime;
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            switch (collision.gameObject.name)
            {
                case "Top":
                    _isTouchTop = true;
                    break;
                case "Bottom":
                    _isTouchBottom = true;
                    break;
                case "Left":
                    _isTouchLeft = true;
                    break;
                case "Right":
                    _isTouchRight = true;
                    break;
            }
        }
        else if (collision.gameObject.tag == "Enemy" ||
                collision.gameObject.tag == "EnemyBullet")
        {
            if (_isHit)
            {
                return;
            }
            _isHit = true;
            _life--;
            _gameManager.UpdateLifeIcon(_life);

            if (_life == 0)
            {
                _gameManager.GameOver();
            }
            else
            {
                _gameManager.RespawnPlayer();
            }
            gameObject.SetActive(false);
            // Invoke는 SetActive가 활성화되어야 가능하므로 GameManager로 넘겨준다.
            collision.gameObject.SetActive(false);
        }
        else if (collision.gameObject.tag == "Item")
        {
            Item item = collision.gameObject.GetComponent<Item>();
            switch (item._type)
            {
                case "Coin":
                    _score += 1000;
                    break;
                case "Power":
                    if (_bulletPower == _bulletMaxPower)
                    {
                        _score += 500;
                    }
                    else
                    {
                        _bulletPower++;
                    }
                    break;
                case "Boom":
                    if (_boom == _maxBoom)
                    {
                        _score += 1000;
                    }
                    else
                    {
                        _boom++;
                        _gameManager.UpdateBoomIcon(_boom);
                    }
                    break;
            }
            collision.gameObject.SetActive(false);
        }
    }

    void BoomDamage()
    {
        // #2. Remove Enemy
        GameObject[] enemiesL = _objectManager.GetPool("EnemyL");
        GameObject[] enemiesM = _objectManager.GetPool("EnemyM");
        GameObject[] enemiesS = _objectManager.GetPool("EnemyS");

        var tempList = new List<GameObject>();
        tempList.AddRange(enemiesL);
        tempList.AddRange(enemiesM);
        tempList.AddRange(enemiesS);

        GameObject[] enemies = tempList.ToArray();

        foreach (GameObject enemy in enemies)
        {
            if (enemy.activeSelf)
            {
                Enemy enemyLogic = enemy.GetComponent<Enemy>();
                enemyLogic.OnHit(5);
            }
        }
        // #3. Remove Enemy Bullet
        GameObject[] bulletsA = _objectManager.GetPool("BulletEnemyA");
        GameObject[] bulletsB = _objectManager.GetPool("BulletEnemyB");

        var tempList2 = new List<GameObject>();
        tempList2.AddRange(bulletsA);
        tempList2.AddRange(bulletsB);

        GameObject[] bullets = tempList2.ToArray();
        foreach (GameObject bullet in bullets)
        {
            if (bullet.activeSelf)
            {
                bullet.SetActive(false);
            }
        }
        Invoke("BoomDamage", 0.2f);
    }

    void OffBoomEffect()
    {
        _boomEffect.SetActive(false);
        _isBoomTime = false;
        CancelInvoke("BoomDamage");
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            switch (collision.gameObject.name)
            {
                case "Top":
                    _isTouchTop = false;
                    break;
                case "Bottom":
                    _isTouchBottom = false;
                    break;
                case "Left":
                    _isTouchLeft = false;
                    break;
                case "Right":
                    _isTouchRight = false;
                    break;
            }
        }
    }

}
