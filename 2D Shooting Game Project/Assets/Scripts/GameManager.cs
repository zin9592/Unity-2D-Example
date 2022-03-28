using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject[] _enemyObjects;   // 스폰되는 적들의 종류
    public Transform[] _spawnPoints;     // 적들의 스폰위치
    public float _maxSpawnDelay;
    public float _curSpawnDelay;

    public GameObject _player;
    public Text _scoreText;
    public Image[] _lifeImage;
    public Image[] _boomImage;
    public GameObject _gameOverSet;

    void Update()
    {
        _curSpawnDelay += Time.deltaTime;

        if (_curSpawnDelay > _maxSpawnDelay)
        {
            SpawnEnemy();
            _maxSpawnDelay = Random.Range(0.5f, 3f);
            _curSpawnDelay = 0;
        }

        // #. UI Score Update
        Player playerLogic = _player.GetComponent<Player>();
        // {0:n0} : 세자리마다 쉼표로 나눠주는 숫자 양식
        _scoreText.text = string.Format("{0:n0}",playerLogic._score);
    }

    void SpawnEnemy()
    {
        int randomEnemy = Random.Range(0, _enemyObjects.Length);
        int randomPoint = Random.Range(0, _spawnPoints.Length);
        GameObject enemy = Instantiate(_enemyObjects[randomEnemy],
                            _spawnPoints[randomPoint].position,
                            _spawnPoints[randomPoint].rotation);

        Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
        Enemy enemyLogic = enemy.GetComponent<Enemy>();
        enemyLogic._player = _player;

        if (randomPoint == 5 || randomPoint == 6)   // Left Spawn
        {
            rigid.velocity = new Vector2(enemyLogic._moveSpeed, -1);
            enemy.transform.Rotate(Vector3.forward * 90);
        }
        else if (randomPoint == 7 || randomPoint == 8)  // Right Spawn
        {
            rigid.velocity = new Vector2(enemyLogic._moveSpeed * (-1), -1);
            enemy.transform.Rotate(Vector3.back * 90);
        }
        else // Top Spawn
        {
            rigid.velocity = new Vector2(0, enemyLogic._moveSpeed * (-1));
        }
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
