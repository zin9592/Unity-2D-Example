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
    public GameManager _gameManager;

    SpriteRenderer _spriteRenderer;
    Animator _anim;

    public int patternIndex;
    public int curPatternCount;
    public int[] maxPatternCount;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();

        if (_enemyName == "B")
        {
            _anim = GetComponent<Animator>();
        }
    }

    void OnEnable()
    {
        _health = _maxHealth;
        if (_enemyName == "B")
        {
            Invoke("Stop", 2);
        }
    }

    void Stop()
    {
        // 오브젝트 풀링으로 OnEnable이 두번 호출되기 때문에 조건을 추가
        if (!gameObject.activeSelf)
        {
            return;
        }
        Rigidbody2D rigidbody = GetComponent<Rigidbody2D>();
        rigidbody.velocity = Vector2.zero;

        Invoke("Think", 2);

    }

    void Think()
    {
        patternIndex = patternIndex == 3 ? 0 : patternIndex + 1;
        curPatternCount = 0;

        switch (patternIndex)
        {
            case 0:
                FireFoward();
                break;
            case 1:
                FireShot();
                break;
            case 2:
                FireArc();
                break;
            case 3:
                FireAround();
                break;
        }
    }

    void FireFoward()
    {
        if (_health <= 0) return;

        //#. Fire 4 Bullet Foward
        GameObject bulletR = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
        GameObject bulletRR = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
        GameObject bulletL = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);
        GameObject bulletLL = _objectManager.MakeObject(ObjectManager.Type.BulletBossA);

        bulletR.transform.position = transform.position + Vector3.right * 0.3f;
        bulletRR.transform.position = transform.position + Vector3.right * 0.45f;
        bulletL.transform.position = transform.position + Vector3.left * 0.3f;
        bulletLL.transform.position = transform.position + Vector3.left * 0.45f;

        Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRR = bulletRR.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidLL = bulletLL.GetComponent<Rigidbody2D>();

        rigidR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidRR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidLL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);

        //#.Pattern Counting
        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
        {
            Invoke("FireFoward", 0.15f);
        }
        else
        {
            Invoke("Think", 3);
        }
    }

    void FireShot()
    {
        if (_health <= 0) return;

        //#.Fire Shot
        for (int i = 0; i < 5; i++)
        {
            GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyB);
            bullet.transform.position = transform.position;
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = _player.transform.position - transform.position;
            Vector2 ranVec = new Vector2(Random.Range(-0.5f, 0.5f), Random.Range(0f, 2f));
            dirVec += ranVec;
            rigid.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);
        }
        //#.Pattern Counting
        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
        {
            Invoke("FireShot", 0.7f);
        }
        else
        {
            Invoke("Think", 3);
        }
    }

    void FireArc()
    {
        if (_health <= 0) return;

        //#.Fire Arc Continue Fire
        GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletEnemyA);
        bullet.transform.position = transform.position;
        bullet.transform.rotation = Quaternion.identity;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        Vector3 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 10 * curPatternCount / maxPatternCount[patternIndex]), -1);
        rigid.AddForce(dirVec.normalized * 5, ForceMode2D.Impulse);

        //#.Pattern Counting
        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
        {
            Invoke("FireArc", 0.15f);
        }
        else
        {
            Invoke("Think", 3);
        }
    }

    void FireAround()
    {
        if (_health <= 0) return;

        //#.Fire Around
        int roundNum = curPatternCount % 2 == 0 ? 50 : 40;
        for(int i = 0; i < roundNum; i++)
        {
            GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletBossB);
            bullet.transform.position = transform.position;
            bullet.transform.rotation = Quaternion.identity;

            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 2 * i / roundNum)
                                        ,Mathf.Sin(Mathf.PI * 2 * i / roundNum));
            rigid.AddForce(dirVec.normalized * 2, ForceMode2D.Impulse);

            Vector3 rotVec = Vector3.forward * 360 * i / roundNum + Vector3.forward * 90;
            bullet.transform.Rotate(rotVec);
        }

        //#.Pattern Counting
        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
        {
            Invoke("FireAround", 0.7f);
        }
        else
        {
            Invoke("Think", 3);
        }
    }

    void Update()
    {
        if (_enemyName == "B")
        {
            return;
        }
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
        if (_enemyName == "B")
        {
            _anim.SetTrigger("OnHit");
        }
        else
        {
            _spriteRenderer.sprite = _sprites[1];
            Invoke("ReturnSprite", 0.1f);
        }
        if (_health <= 0)
        {
            Player playerLogic = _player.GetComponent<Player>();
            playerLogic._score += _enemyScore;

            //#.Explosion
            Explosion.Type type = Explosion.Type.Null;

            switch (_enemyName)
            {
                case "S":
                    type = Explosion.Type.Small;
                    break;
                case "M":
                    type = Explosion.Type.Midium;
                    break;
                case "L":
                    type = Explosion.Type.Large;
                    break;
                case "B":
                    type = Explosion.Type.Boss;
                    break;
            }
            _gameManager.CallExplosion(transform.position, type);

            //#.Random Ratio Item Drop
            int ran = _enemyName == "B" ? 0 : Random.Range(0, 10);

            if (ran < 5)
            {
                // None Item
            }
            else if (ran < 8)
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
            //#.Boss Kill
            if (_enemyName == "B")
            {
                _objectManager.DeleteAllObj(ObjectManager.Type.EnemyB);
                CancelInvoke();
                _gameManager.StageEnd();
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
        if (collision.gameObject.tag == "BorderBullet" && _enemyName != "B")
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
