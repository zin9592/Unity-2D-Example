using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float _moveSpeed;
    public bool _isTouchTop;
    public bool _isTouchBottom;
    public bool _isTouchLeft;
    public bool _isTouchRight;

    public GameObject _bulletObjA;
    public GameObject _bulletObjB;
    public float _bulletSpeed;
    public float _curShotDelay;         // 한발쏜 다음 충전되기 위한 딜레이
    public float _maxShotDelay;         // 실제 딜레이
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

        if(_curShotDelay < _maxShotDelay)
        {
            return;
        }
        // 프리펩 장면에 추가 매개변수(오리지널 오브젝트, 생성될 위치, 방향)
        GameObject bullet = Instantiate(_bulletObjA, transform.position, transform.rotation);
        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
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
