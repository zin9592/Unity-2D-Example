using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

public class GameManager : MonoBehaviour
{
    public string[] _enemyObjects;   // 스폰되는 적들의 종류
    public Transform[] _spawnPoints;     // 적들의 스폰위치
    public float _nextSpawnDelay;
    public float _curSpawnDelay;

    public GameObject _player;
    public Text _scoreText;
    public Image[] _lifeImage;
    public Image[] _boomImage;
    public GameObject _gameOverSet;
    public ObjectManager _objectManager;

    public List<Spawn> _spawnList;  // 적 스폰 목록
    public int _spawnIndex;         // 적 스폰 인덱스
    public bool _isSpawnEnd;        // 모든 리스폰이 끝났나요?

    void Awake()
    {
        _spawnList = new List<Spawn>();
        ReadSpawnFile();
    }
    void ReadSpawnFile()
    {
        //1. 변수 초기화
        _spawnList.Clear();
        _spawnIndex = 0;
        _isSpawnEnd = false;

        //2. 리스폰 파일 읽기
        TextAsset textFile = Resources.Load("Stage0") as TextAsset;
        //파일 내의 문자열 데이터 읽기 클래스
        StringReader stringReader = new StringReader(textFile.text);

        while (stringReader != null)
        {
            string line = stringReader.ReadLine();
            if(line == null)
            {
                break;
            }
            //3. 리스폰 데이터 생성
            Spawn spawnData = new Spawn();
            spawnData._delay = float.Parse(line.Split(',')[0]);
            spawnData._type = line.Split(',')[1];
            spawnData._point = int.Parse(line.Split(',')[2]);
            _spawnList.Add(spawnData);
        }

        //4. 텍스트 파일 닫기
        stringReader.Close();

        //5. 다음번째 스폰 딜레이 적용
        _nextSpawnDelay = _spawnList[0]._delay;
    }

    void Update()
    {
        _curSpawnDelay += Time.deltaTime;

        if (_curSpawnDelay > _nextSpawnDelay && !_isSpawnEnd)
        {
            SpawnEnemy();
            _curSpawnDelay = 0;
        }

        // #. UI Score Update
        Player playerLogic = _player.GetComponent<Player>();
        // {0:n0} : 세자리마다 쉼표로 나눠주는 숫자 양식
        _scoreText.text = string.Format("{0:n0}",playerLogic._score);
    }

    void SpawnEnemy()
    {
        ObjectManager.Type enemyType = 0;
        switch (_spawnList[_spawnIndex]._type)
        {
            case "S":
                enemyType = ObjectManager.Type.EnemyS;
                break;
            case "M":
                enemyType = ObjectManager.Type.EnemyM;
                break;
            case "L":
                enemyType = ObjectManager.Type.EnemyL;
                break;
            case "B":
                enemyType = ObjectManager.Type.EnemyB;
                break;
        }
        int enemyPoint = _spawnList[_spawnIndex]._point;
        GameObject enemy = _objectManager.MakeObject(enemyType);
        enemy.transform.position = _spawnPoints[enemyPoint].position;

        Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
        Enemy enemyLogic = enemy.GetComponent<Enemy>();
        enemyLogic._player = _player;
        enemyLogic._objectManager = _objectManager;

        if (enemyPoint == 5 || enemyPoint == 6)   // Left Spawn
        {
            rigid.velocity = new Vector2(enemyLogic._moveSpeed, -1);
            enemy.transform.Rotate(Vector3.forward * 90);
        }
        else if (enemyPoint == 7 || enemyPoint == 8)  // Right Spawn
        {
            rigid.velocity = new Vector2(enemyLogic._moveSpeed * (-1), -1);
            enemy.transform.Rotate(Vector3.back * 90);
        }
        else // Top Spawn
        {
            rigid.velocity = new Vector2(0, enemyLogic._moveSpeed * (-1));
        }

        //#. 리스폰 인덱스 증가
        _spawnIndex++;
        if(_spawnIndex == _spawnList.Count)
        {
            _isSpawnEnd = true;
            return;
        }
        //#. 다음 리스폰 딜레이 갱신
        _nextSpawnDelay = _spawnList[_spawnIndex]._delay;
    }

    public void UpdateLifeIcon(int life)
    {
        // #.Ui Life Init Disable
        for (int idx = 0; idx < 3; idx++)
        {
            _lifeImage[idx].color = new Color(1, 1, 1, 0);
        }
        // #.Ui Life Active
        for (int idx = 0; idx < life; idx++)
        {
            _lifeImage[idx].color = new Color(1, 1, 1, 1);
        }
    }

    public void UpdateBoomIcon(int boom)
    {
        // #.Ui Boom Init Disable
        for (int idx = 0; idx < 3; idx++)
        {
            _boomImage[idx].color = new Color(1, 1, 1, 0);
        }
        // #.Ui Boom Active
        for (int idx = 0; idx < boom; idx++)
        {
            _boomImage[idx].color = new Color(1, 1, 1, 1);
        }
    }

    public void RespawnPlayer()
    {
        Invoke("RespawnPlayerExe", 2f);
    }
    void RespawnPlayerExe()
    {
        _player.transform.position = Vector3.down * 4f;
        _player.SetActive(true);

        Player playerLogic = _player.GetComponent<Player>();
        playerLogic._isHit = false;
    }

    public void GameOver()
    {
        _gameOverSet.SetActive(true);
    }

    public void GameRetry()
    {
        SceneManager.LoadScene(0);
    }
}
