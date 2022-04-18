using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    // �÷��̾�
    public float _moveSpeed;
    public int _life;
    public int _score;
    public bool _isHit;

    // ��輱
    public bool _isTouchTop;
    public bool _isTouchBottom;
    public bool _isTouchLeft;
    public bool _isTouchRight;

    // �߻�ü
    public float _bulletSpeed;
    public int _bulletPower;
    public int _bulletMaxPower;
    public float _curShotDelay;         // �ѹ߽� ���� �����Ǳ� ���� ������
    public float _maxShotDelay;         // ���� ������

    // �߻�ü ������Ʈ
    public GameObject _bulletObjA;
    public GameObject _bulletObjB;

    // Boom
    public int _boom;
    public int _maxBoom;
    public bool _isBoomTime;

    // Boom ������Ʈ
    public GameObject _boomEffect;

    // �ȷο�
    public GameObject[] _followers;

    // ������
    public bool _isRespawnTime;
    SpriteRenderer _sprite;

    // Manager
    public GameManager _gameManager;
    public ObjectManager _objectManager;

    // Anim
    Animator _animator;

    // JoyControl
    public bool[] _joyControl;   //��� ��ư�� ��������?
    public bool _isControl;      //���� ��ư�� ��������?

    // Button A,B
    public bool _isButtonA;
    public bool _isButtonB;

    void Awake()
    {
        _animator = GetComponent<Animator>();
        _sprite = GetComponent<SpriteRenderer>();
        _gameManager.UpdateBoomIcon(_boom);
    }

    void OnEnable()
    {
        Unbeatable();
    }

    void Unbeatable()
    {
        _isRespawnTime = !_isRespawnTime;
        if (_isRespawnTime) // #. ���� Ÿ�� ����Ʈ(����)
        {
            _sprite.color = new Color(1, 1, 1, 0.5f);

            for (int i = 0; i < _followers.Length; i++)
            {
                _followers[i].GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.5f);
            }

            Invoke("Unbeatable", 3);
        }
        else // #. ���� Ÿ�� ���� (�������)
        {
            _sprite.color = new Color(1, 1, 1, 1);

            for (int i = 0; i < _followers.Length; i++)
            {
                _followers[i].GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
            }
        }
    }

    void Update()
    {
        Move();
        Fire();
        Boom();
        Reload();
    }

    public void JoyPanel(int type)
    {
        for (int i = 0; i < 9; i++)
        {
            _joyControl[i] = i == type;
            // ���� 5���� �������� 5���� true �������� false�� �ȴ�.
        }
    }

    public void JoyDown()
    {
        _isControl = true;
    }

    public void JoyUp()
    {
        _isControl = false;
    }

    void Move()
    {
        //#.Keyboard Control Value
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");

        //#.Joy Control Value
        if (_joyControl[0]) { h = -1; v = 1; }
        if (_joyControl[1]) { h = 0; v = 1; }
        if (_joyControl[2]) { h = 1; v = 1; }
        if (_joyControl[3]) { h = -1; v = 0; }
        if (_joyControl[4]) { h = 0; v = 0; }
        if (_joyControl[5]) { h = 1; v = 0; }
        if (_joyControl[6]) { h = -1; v = -1; }
        if (_joyControl[7]) { h = 0; v = -1; }
        if (_joyControl[8]) { h = 1; v = -1; }

        if ((_isTouchRight && h == 1) || (_isTouchLeft && h == -1) || !_isControl)
        {
            h = 0;
        }
        if ((_isTouchTop && v == 1) || (_isTouchBottom && v == -1) || !_isControl)
        {
            v = 0;
        }
        Vector3 curPos = transform.position;        // ������ġ
        Vector3 nextPos = new Vector3(h, v, 0) * _moveSpeed * Time.deltaTime;

        transform.position = curPos + nextPos;

        if (Input.GetButtonDown("Horizontal") || Input.GetButtonUp("Horizontal"))
        {
            _animator.SetInteger("Input", (int)h);
        }
    }

    public void ButtonAUp()
    {
        _isButtonA = false;
    }
    public void ButtonADown()
    {
        _isButtonA = true;
    }
    public void ButtonBUp()
    {
        _isButtonB = false;
    }
    public void ButtonBDown()
    {
        _isButtonB = true;
    }

    void Fire()
    {
        /*
        if (!Input.GetButton("Fire1"))
        {
            return;
        }*/

        if (!_isButtonA)
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

                GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
                bullet.transform.position = transform.position;

                Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
                rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 2:
                // Power 2 : Double Shot
                GameObject doubleBulletL = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
                doubleBulletL.transform.position = transform.position + Vector3.left * 0.1f;
                GameObject doubleBulletR = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
                doubleBulletR.transform.position = transform.position + Vector3.right * 0.1f;
                Rigidbody2D doubleBulletRigidL = doubleBulletL.GetComponent<Rigidbody2D>();
                Rigidbody2D doubleBulletRigidR = doubleBulletR.GetComponent<Rigidbody2D>();
                doubleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                doubleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 3:
            case 4:
            case 5:
            case 6:
                // Power 3 : Triple Shot
                GameObject TripleBulletL = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
                TripleBulletL.transform.position = transform.position + Vector3.left * 0.4f;
                GameObject TripleBulletC = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerB);
                TripleBulletC.transform.position = transform.position;
                GameObject TripleBulletR = _objectManager.MakeObject(ObjectManager.Type.BulletPlayerA);
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
        /*
        // Fire2 ��ư�� �ȴ����°�?
        if (!Input.GetButton("Fire2"))
        {
            return;
        }*/

        if (!_isButtonB)
        {
            return;
        }

        // ��ź�� �̹� ������ΰ�?
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
            if (_isRespawnTime)
            {
                return;
            }
            if (_isHit)
            {
                return;
            }
            _isHit = true;
            _life--;
            _gameManager.UpdateLifeIcon(_life);
            _gameManager.CallExplosion(transform.position, Explosion.Type.Player);

            if (_life == 0)
            {
                _gameManager.GameOver();
            }
            else
            {
                _gameManager.RespawnPlayer();
            }
            gameObject.SetActive(false);
            // Invoke�� SetActive�� Ȱ��ȭ�Ǿ�� �����ϹǷ� GameManager�� �Ѱ��ش�.
            if (collision.gameObject.tag == "EnemyBullet")
            {
                collision.gameObject.SetActive(false);
            }
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
                        AddFollwer();
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

    void AddFollwer()
    {
        if (_bulletPower == 4)
        {
            _followers[0].SetActive(true);
        }
        else if (_bulletPower == 5)
        {
            _followers[1].SetActive(true);
        }
        else if (_bulletPower == 6)
        {
            _followers[2].SetActive(true);
        }
    }

    void BoomDamage()
    {
        // #2. Remove Enemy
        GameObject[] enemiesB = _objectManager.GetPool(ObjectManager.Type.EnemyB);
        GameObject[] enemiesL = _objectManager.GetPool(ObjectManager.Type.EnemyL);
        GameObject[] enemiesM = _objectManager.GetPool(ObjectManager.Type.EnemyM);
        GameObject[] enemiesS = _objectManager.GetPool(ObjectManager.Type.EnemyS);

        var tempList = new List<GameObject>();
        tempList.AddRange(enemiesB);
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
        GameObject[] bulletsA = _objectManager.GetPool(ObjectManager.Type.BulletEnemyA);
        GameObject[] bulletsB = _objectManager.GetPool(ObjectManager.Type.BulletEnemyB);
        GameObject[] bulletsBossA = _objectManager.GetPool(ObjectManager.Type.BulletBossA);
        GameObject[] bulletsBossB = _objectManager.GetPool(ObjectManager.Type.BulletBossB);

        var tempList2 = new List<GameObject>();
        tempList2.AddRange(bulletsA);
        tempList2.AddRange(bulletsB);
        tempList2.AddRange(bulletsBossA);
        tempList2.AddRange(bulletsBossB);

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
