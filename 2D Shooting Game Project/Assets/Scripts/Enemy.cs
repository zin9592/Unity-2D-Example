using UnityEngine;

public class Enemy : MonoBehaviour
{
    // �� ��ü
    public string _enemyName;
    public int _enemyScore;
    public float _moveSpeed;
    public int _health;

    public Sprite[] _sprites;    // �⺻ �̹���, �ǰ� �̹���

    // �߻�ü
    public float _curShotDelay;         // �ѹ߽� ���� �����Ǳ� ���� ������
    public float _maxShotDelay;         // ���� ������

    // �߻�ü ������Ʈ
    public GameObject _bulletObjA;
    public GameObject _bulletObjB;

    // ������ ���
    public GameObject _itemCoin;
    public GameObject _itemPower;
    public GameObject _itemBoom;

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
        if (_enemyName == "S")
        {
            GameObject bullet = Instantiate(_bulletObjA, transform.position, transform.rotation);
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            // �ٶ󺸴� ����
            Vector3 dirVec = _player.transform.position - transform.position;
            rigid.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);
        }
        else if (_enemyName == "L")
        {
            GameObject bulletL = Instantiate(_bulletObjB, transform.position + Vector3.left * 0.3f, transform.rotation);
            GameObject bulletR = Instantiate(_bulletObjB, transform.position + Vector3.right * 0.3f, transform.rotation);

            Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();

            Vector3 dirVecL = _player.transform.position - transform.position + Vector3.left * 0.3f;
            Vector3 dirVecR = _player.transform.position - transform.position + Vector3.right * 0.3f;

            rigidL.AddForce(dirVecL.normalized * 3, ForceMode2D.Impulse);
            rigidR.AddForce(dirVecR.normalized * 3, ForceMode2D.Impulse);
        }
        _curShotDelay = 0;
    }

    void Reload()
    {
        _curShotDelay += Time.deltaTime;
    }

    // �ǰ�
    public void OnHit(int damamge)
    {
        if (_health <= 0)
        {
            return;
        }
        _health -= damamge;
        _spriteRenderer.sprite = _sprites[1];
        Invoke("ReturnSprite", 0.1f);

        if (_health <= 0)
        {
            Player playerLogic = _player.GetComponent<Player>();
            playerLogic._score += _enemyScore;

            //#.Random Ratio Item Drop
            int ran = Random.Range(0,10);
            
            if(ran < 5)
            {
                // None Item
            }
            else if(ran < 8)
            {
                // Coin
                Instantiate(_itemCoin, transform.position, _itemCoin.transform.rotation);
            }
            else if (ran < 9)
            {
                // Power
                Instantiate(_itemPower, transform.position, _itemPower.transform.rotation);
            }
            else if (ran < 10)
            {
                // Boom
                Instantiate(_itemBoom, transform.position, _itemBoom.transform.rotation);
            }
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
