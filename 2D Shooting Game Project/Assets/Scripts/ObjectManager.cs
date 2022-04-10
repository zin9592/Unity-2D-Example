using UnityEngine;

public class ObjectManager : MonoBehaviour
{
    public enum Type
    {
        EnemyL,
        EnemyM,
        EnemyS,
        EnemyB,
        ItemCoin,
        ItemPower,
        ItemBoom,
        BulletPlayerA,
        BulletPlayerB,
        BulletEnemyA,
        BulletEnemyB,
        BulletBossA,
        BulletBossB,
        BulletFollwer
    }

    public GameObject _enemyBPrefab;
    public GameObject _enemyLPrefab;
    public GameObject _enemyMPrefab;
    public GameObject _enemySPrefab;
    public GameObject _itemCoinPrefab;
    public GameObject _itemPowerPrefab;
    public GameObject _itemBoomPrefab;
    public GameObject _bulletPlayerAPrefab;
    public GameObject _bulletPlayerBPrefab;
    public GameObject _bulletEnemyAPrefab;
    public GameObject _bulletEnemyBPrefab;
    public GameObject _bulletBossAPrefab;
    public GameObject _bulletBossBPrefab;
    public GameObject _bulletFollwerPrefab;

    GameObject[] _enemyB;
    GameObject[] _enemyL;
    GameObject[] _enemyM;
    GameObject[] _enemyS;

    GameObject[] _itemCoin;
    GameObject[] _itemPower;
    GameObject[] _itemBoom;

    GameObject[] _bulletPlayerA;
    GameObject[] _bulletPlayerB;
    GameObject[] _bulletEnemyA;
    GameObject[] _bulletEnemyB;
    GameObject[] _bulletBossA;
    GameObject[] _bulletBossB;
    GameObject[] _bulletFollwer;

    GameObject[] _targetPool;

    void Awake()
    {
        _enemyB = new GameObject[5];
        _enemyL = new GameObject[10];
        _enemyM = new GameObject[10];
        _enemyS = new GameObject[20];

        _itemCoin = new GameObject[20];
        _itemPower = new GameObject[10];
        _itemBoom = new GameObject[10];

        _bulletPlayerA = new GameObject[100];
        _bulletPlayerB = new GameObject[100];
        _bulletEnemyA = new GameObject[100];
        _bulletEnemyB = new GameObject[100];
        _bulletBossA = new GameObject[100];
        _bulletBossB = new GameObject[300];
        _bulletFollwer = new GameObject[100];

        Generate();
    }

    void Generate()
    {
        // 참고사항
        // 1. 위치는 필요가 없다.
        // 2. 첫 로딩시간 = 장면 배치 + 오브젝트 풀 생성

        // 1. Enemy
        for (int i = 0; i < _enemyB.Length; i++)
        {
            _enemyB[i] = Instantiate(_enemyBPrefab);
            _enemyB[i].SetActive(false);
        }
        for (int i = 0; i < _enemyL.Length; i++)
        {
            _enemyL[i] = Instantiate(_enemyLPrefab);
            _enemyL[i].SetActive(false);
        }
        for (int i = 0; i < _enemyM.Length; i++)
        {
            _enemyM[i] = Instantiate(_enemyMPrefab);
            _enemyM[i].SetActive(false);
        }
        for (int i = 0; i < _enemyS.Length; i++)
        {
            _enemyS[i] = Instantiate(_enemySPrefab);
            _enemyS[i].SetActive(false);
        }

        // 2. Item
        for (int i = 0; i < _itemCoin.Length; i++)
        {
            _itemCoin[i] = Instantiate(_itemCoinPrefab);
            _itemCoin[i].SetActive(false);
        }
        for (int i = 0; i < _itemPower.Length; i++)
        {
            _itemPower[i] = Instantiate(_itemPowerPrefab);
            _itemPower[i].SetActive(false);
        }
        for (int i = 0; i < _itemBoom.Length; i++)
        {
            _itemBoom[i] = Instantiate(_itemBoomPrefab);
            _itemBoom[i].SetActive(false);
        }

        // 3. Bullet
        for (int i = 0; i < _bulletPlayerA.Length; i++)
        {
            _bulletPlayerA[i] = Instantiate(_bulletPlayerAPrefab);
            _bulletPlayerA[i].SetActive(false);
        }
        for (int i = 0; i < _bulletPlayerB.Length; i++)
        {
            _bulletPlayerB[i] = Instantiate(_bulletPlayerBPrefab);
            _bulletPlayerB[i].SetActive(false);
        }
        for (int i = 0; i < _bulletEnemyA.Length; i++)
        {
            _bulletEnemyA[i] = Instantiate(_bulletEnemyAPrefab);
            _bulletEnemyA[i].SetActive(false);
        }
        for (int i = 0; i < _bulletEnemyB.Length; i++)
        {
            _bulletEnemyB[i] = Instantiate(_bulletEnemyBPrefab);
            _bulletEnemyB[i].SetActive(false);
        }
        for (int i = 0; i < _bulletBossA.Length; i++)
        {
            _bulletBossA[i] = Instantiate(_bulletBossAPrefab);
            _bulletBossA[i].SetActive(false);
        }
        for (int i = 0; i < _bulletBossB.Length; i++)
        {
            _bulletBossB[i] = Instantiate(_bulletBossBPrefab);
            _bulletBossB[i].SetActive(false);
        }
        for (int i = 0; i < _bulletFollwer.Length; i++)
        {
            _bulletFollwer[i] = Instantiate(_bulletFollwerPrefab);
            _bulletFollwer[i].SetActive(false);
        }
    }

    public GameObject MakeObject(Type type)
    {
        switch (type)
        {
            case Type.EnemyB:
                _targetPool = _enemyB;
                break;
            case Type.EnemyL:
                _targetPool = _enemyL;
                break;
            case Type.EnemyM:
                _targetPool = _enemyM;
                break;
            case Type.EnemyS:
                _targetPool = _enemyS;
                break;
            case Type.ItemCoin:
                _targetPool = _itemCoin;
                break;
            case Type.ItemPower:
                _targetPool = _itemPower;
                break;
            case Type.ItemBoom:
                _targetPool = _itemBoom;
                break;
            case Type.BulletPlayerA:
                _targetPool = _bulletPlayerA;
                break;
            case Type.BulletPlayerB:
                _targetPool = _bulletPlayerB;
                break;
            case Type.BulletEnemyA:
                _targetPool = _bulletEnemyA;
                break;
            case Type.BulletEnemyB:
                _targetPool = _bulletEnemyB;
                break;
            case Type.BulletBossA:
                _targetPool = _bulletBossA;
                break;
            case Type.BulletBossB:
                _targetPool = _bulletBossB;
                break;
            case Type.BulletFollwer:
                _targetPool = _bulletFollwer;
                break;

        }

        for (int i = 0; i < _targetPool.Length; i++)
        {
            // 비활성화 된 오브젝트이면
            if (!_targetPool[i].activeSelf)
            {
                _targetPool[i].SetActive(true);
                return _targetPool[i];
            }
        }

        return null;
    }

    public GameObject[] GetPool(Type type)
    {
        switch (type)
        {
            case Type.EnemyB:
                _targetPool = _enemyB;
                break;
            case Type.EnemyL:
                _targetPool = _enemyL;
                break;
            case Type.EnemyM:
                _targetPool = _enemyM;
                break;
            case Type.EnemyS:
                _targetPool = _enemyS;
                break;
            case Type.ItemCoin:
                _targetPool = _itemCoin;
                break;
            case Type.ItemPower:
                _targetPool = _itemPower;
                break;
            case Type.ItemBoom:
                _targetPool = _itemBoom;
                break;
            case Type.BulletPlayerA:
                _targetPool = _bulletPlayerA;
                break;
            case Type.BulletPlayerB:
                _targetPool = _bulletPlayerB;
                break;
            case Type.BulletEnemyA:
                _targetPool = _bulletEnemyA;
                break;
            case Type.BulletEnemyB:
                _targetPool = _bulletEnemyB;
                break;
            case Type.BulletBossA:
                _targetPool = _bulletBossA;
                break;
            case Type.BulletBossB:
                _targetPool = _bulletBossB;
                break;
            case Type.BulletFollwer:
                _targetPool = _bulletFollwer;
                break;
        }

        return _targetPool;
    }
}
