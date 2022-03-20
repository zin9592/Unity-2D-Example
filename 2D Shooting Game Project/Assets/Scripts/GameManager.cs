using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject[] _enemyObjects;   // �����Ǵ� ������ ����
    public Transform[] _spawnPoints;     // 5���� ��������Ʈ
    public float _maxSpawnDelay;
    public float _curSpawnDelay;

    void Update()
    {
        _curSpawnDelay += Time.deltaTime;
        
        if(_curSpawnDelay > _maxSpawnDelay)
        {
            SpawnEnemy();
            _maxSpawnDelay = Random.Range(0.5f, 5f);
            _curSpawnDelay = 0;
        }
    }

    void SpawnEnemy()
    {
        int randomEnemy = Random.Range(0, 3);
        int randomPoint = Random.Range(0, 5);
        Instantiate(_enemyObjects[randomEnemy], 
            _spawnPoints[randomPoint].position, 
            _spawnPoints[randomPoint].rotation);
    }
}
