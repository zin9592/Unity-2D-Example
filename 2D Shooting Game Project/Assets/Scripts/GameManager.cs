using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject[] _enemyObjects;   // 스폰되는 적들의 종류
    public Transform[] _spawnPoints;     // 적들의 스폰위치
    public float _maxSpawnDelay;
    public float _curSpawnDelay;

    public GameObject _player;

    void Update()
    {
        _curSpawnDelay += Time.deltaTime;

        if (_curSpawnDelay > _maxSpawnDelay)
        {
            SpawnEnemy();
            _maxSpawnDelay = Random.Range(0.5f, 3f);
            _curSpawnDelay = 0;
        }
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
}
