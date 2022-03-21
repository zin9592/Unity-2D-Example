using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float _moveSpeed;
    public int _health;
    public Sprite[] _sprites;    // �⺻ �̹���, �ǰ� �̹���

    // �߻�ü
    public float _curShotDelay;         // �ѹ߽� ���� �����Ǳ� ���� ������
    public float _maxShotDelay;         // ���� ������

    // �߻�ü ������Ʈ
    public GameObject _bulletObjA;
    public GameObject _bulletObjB;

    public GameObject _player;

    SpriteRenderer _spriteRenderer;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        Fire();
        Reload();
    }

    void Fire()
    {
        if (_curShotDelay < _maxShotDelay)
        {
            return;
        }
        if (gameObject.name == "Enemy S(Clone)")
        {
            GameObject bullet = Instantiate(_bulletObjA, transform.position, transform.rotation);
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            // �ٶ󺸴� ����
            Vector3 dirVec = _player.transform.position - transform.position;
            rigid.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);
        }
        else if (gameObject.name == "Enemy L(Clone)")
        {
            GameObject bulletL = Instantiate(_bulletObjB, transform.position + Vector3.left * 0.3f, transform.rotation);
            GameObject bulletR = Instantiate(_bulletObjB, transform.position + Vector3.right * 0.3f, transform.rotation);

            Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();

            Vector3 dirVecL = _player.transform.position - transform.position + Vector3.left * 0.3f;
            Vector3 dirVecR = _player.transform.position - transform.position + Vector3.right * 0.3f;

            rigidL.AddForce(dirVecL.normalized * 10, ForceMode2D.Impulse);
            rigidR.AddForce(dirVecR.normalized * 10, ForceMode2D.Impulse);
        }
        _curShotDelay = 0;
    }

    void Reload()
    {
        _curShotDelay += Time.deltaTime;
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
        if (collision.gameObject.tag == "BorderBullet")
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
