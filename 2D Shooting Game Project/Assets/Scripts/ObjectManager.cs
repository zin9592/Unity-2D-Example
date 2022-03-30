using UnityEngine;

public class ObjectManager : MonoBehaviour
{
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

    GameObject[] _targetPool;

    void Awake()
    {
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

        Generate();
    }

    void Generate()
    {
        // 참고사항
        // 1. 위치는 필요가 없다.
        // 2. 첫 로딩시간 = 장면 배치 + 오브젝트 풀 생성

        // 1. Enemy
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
    }

    public GameObject MakeObject(string type)
    {
        switch (type)
        {
            case "EnemyL":
                _targetPool = _enemyL;
                break;
            case "EnemyM":
                _targetPool = _enemyM;
                break;
            case "EnemyS":
                _targetPool = _enemyS;
                break;
            case "ItemCoin":
                _targetPool = _itemCoin;
                break;
            case "ItemPower":
                _targetPool = _itemPower;
                break;
            case "ItemBoom":
                _targetPool = _itemBoom;
                break;
            case "BulletPlayerA":
                _targetPool = _bulletPlayerA;
                break;
            case "BulletPlayerB":
                _targetPool = _bulletPlayerB;
                break;
            case "BulletEnemyA":
                _targetPool = _bulletEnemyA;
                break;
            case "BulletEnemyB":
                _targetPool = _bulletEnemyB;
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

    public GameObject[] GetPool(string type)
    {
        switch (type)
        {
            case "EnemyL":
                _targetPool = _enemyL;
                break;
            case "EnemyM":
                _targetPool = _enemyM;
                break;
            case "EnemyS":
                _targetPool = _enemyS;
                break;
            case "ItemCoin":
                _targetPool = _itemCoin;
                break;
            case "ItemPower":
                _targetPool = _itemPower;
                break;
            case "ItemBoom":
                _targetPool = _itemBoom;
                break;
            case "BulletPlayerA":
                _targetPool = _bulletPlayerA;
                break;
            case "BulletPlayerB":
                _targetPool = _bulletPlayerB;
                break;
            case "BulletEnemyA":
                _targetPool = _bulletEnemyA;
                break;
            case "BulletEnemyB":
                _targetPool = _bulletEnemyB;
                break;
        }

        return _targetPool;
    }
}
