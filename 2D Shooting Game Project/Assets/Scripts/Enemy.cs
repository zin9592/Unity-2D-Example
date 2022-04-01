using UnityEngine;

public class Enemy : MonoBehaviour
{
    // 적 기체
    public string _enemyName;
    public int _enemyScore;
    public float _moveSpeed;
    public int _health;
    public int _maxHealth;

    public Sprite[] _sprites;    // 기본 이미지, 피격 이미지

    // 발사체
    public float _curShotDelay;         // 한발쏜 다음 충전되기 위한 딜레이
    public float _maxShotDelay;         // 실제 딜레이

    // 발사체 오브젝트
    public GameObject _bulletObjA;
    public GameObject _bulletObjB;

    // 아이템 드롭
    public GameObject _itemCoin;
    public GameObject _itemPower;
    public GameObject _itemBoom;

    public GameObject _player;

    public ObjectManager _objectManager;

    SpriteRenderer _spriteRenderer;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void OnEnable()
    {
        _health = _maxHealth;     
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
            GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyA);
            bullet.transform.position = transform.position;
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            // 바라보는 각도
            Vector3 dirVec = _player.transform.position - transform.position;
            rigid.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);
        }
        else if (_enemyName == "L")
        {
            GameObject bulletL = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
            bulletL.transform.position = transform.position + Vector3.left * 0.3f;

            GameObject bulletR = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
            bulletR.transform.position = transform.position + Vector3.right * 0.3f;

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

    // 피격
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
                GameObject itemCoin = _objectManager.MakeObject(ObjectManager.Type.ItemCoin);
                itemCoin.transform.position = transform.position;
            }
            else if (ran < 9)
            {
                // Power
                GameObject itemPower = _objectManager.MakeObject(ObjectManager.Type.ItemPower);
                itemPower.transform.position = transform.position;
            }
            else if (ran < 10)
            {
                // Boom
                GameObject itemBoom = _objectManager.MakeObject(ObjectManager.Type.ItemBoom);
                itemBoom.transform.position = transform.position;
            }
            gameObject.SetActive(false);
            transform.rotation = Quaternion.identity;
        }
    }

    void ReturnSprite()
    {
        _spriteRenderer.sprite = _sprites[0];
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        // 맵 밖으로 나간 일반기체는 삭제
        if (collision.gameObject.tag == "BorderBullet")
        {
            gameObject.SetActive(false);
            transform.rotation = Quaternion.identity;
        }
        else if (collision.gameObject.tag == "PlayerBullet")
        {
            Bullet bullet = collision.gameObject.GetComponent<Bullet>();
            OnHit(bullet._damage);
            collision.gameObject.SetActive(false);
        }
    }
}
