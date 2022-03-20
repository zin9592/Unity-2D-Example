using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float _moveSpeed;
    public int _health;
    public Sprite[] _sprites;    // �⺻ �̹���, �ǰ� �̹���

    SpriteRenderer _spriteRenderer;
    Rigidbody2D _rigid;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _rigid = GetComponent<Rigidbody2D>();
        _rigid.velocity = Vector2.down * _moveSpeed;
    }

    // �ǰ�
    void OnHit(int damamge)
    {
        _health -= damamge;
        _spriteRenderer.sprite = _sprites[1];
        Invoke("ReturnSprite", 0.1f);

        if (_health <= 0)
        {
            Destroy(gameObject);
        }
    }

    void ReturnSprite()
    {
        _spriteRenderer.sprite = _sprites[0];
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        // �� ������ ���� �Ϲݱ�ü�� ����
        if(collision.gameObject.tag == "BorderBullet")
        {
            Destroy(gameObject);
        }    
        else if (collision.gameObject.tag == "PlayerBullet")
        {
            Bullet bullet = collision.gameObject.GetComponent<Bullet>();
            OnHit(bullet._damage);
            Destroy(collision.gameObject);
        }
    }
}
