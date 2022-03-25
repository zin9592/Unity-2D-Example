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

    public GameManager _manager;

    Animator _animator;

    void Awake()
    {
        _animator = GetComponent<Animator>();
    }

    void Update()
    {
        Move();
        Fire();
        Reload();
    }

    void Move()
    {
        float h = Input.GetAxisRaw("Horizontal");   // ����
        if ((_isTouchRight && h == 1) || (_isTouchLeft && h == -1))
        {
            h = 0;
        }
        float v = Input.GetAxisRaw("Vertical");     // ����
        if ((_isTouchTop && v == 1) || (_isTouchBottom && v == -1))
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
                GameObject bullet = Instantiate(_bulletObjA, transform.position, transform.rotation);
                Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
                rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 2:
                // Power 2 : Double Shot
                GameObject doubleBulletL = Instantiate(_bulletObjA, transform.position + Vector3.left * 0.1f, transform.rotation);
                GameObject doubleBulletR = Instantiate(_bulletObjA, transform.position + Vector3.right * 0.1f, transform.rotation);
                Rigidbody2D doubleBulletRigidL = doubleBulletL.GetComponent<Rigidbody2D>();
                Rigidbody2D doubleBulletRigidR = doubleBulletR.GetComponent<Rigidbody2D>();
                doubleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                doubleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
            case 3:
                // Power 3 : Triple Shot
                GameObject TriplebulletL = Instantiate(_bulletObjA, transform.position + Vector3.left * 0.4f, transform.rotation);
                GameObject TripleBulletC = Instantiate(_bulletObjB, transform.position, transform.rotation);
                GameObject TripleBulletR = Instantiate(_bulletObjA, transform.position + Vector3.right * 0.4f, transform.rotation);
                Rigidbody2D TripleBulletRigidL = TriplebulletL.GetComponent<Rigidbody2D>();
                Rigidbody2D TripleBulletRigidC = TripleBulletC.GetComponent<Rigidbody2D>();
                Rigidbody2D TripleBulletRigidR = TripleBulletR.GetComponent<Rigidbody2D>();
                TripleBulletRigidL.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                TripleBulletRigidC.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                TripleBulletRigidR.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
                break;
        }
        _curShotDelay = 0;
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
            _manager.UpdateLifeIcon(_life);

            if (_life == 0)
            {
                _manager.GameOver();
            }
            else
            {
                _manager.RespawnPlayer();
            }
            gameObject.SetActive(false);
            // Invoke�� SetActive�� Ȱ��ȭ�Ǿ�� �����ϹǷ� GameManager�� �Ѱ��ش�.
            Destroy(collision.gameObject);
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
                    break;
            }
        }
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
