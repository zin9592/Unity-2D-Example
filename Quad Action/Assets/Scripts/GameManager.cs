using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

public class GameManager : MonoBehaviour
{
    //Camera
    public GameObject _menuCam;
    public GameObject _gameCam;

    //Player
    public Player _player;

    //Shop and StartZone
    public GameObject _itemShop;
    public GameObject _weaponShop;
    public GameObject _startZone;

    //Boss
    public Boss _boss;

    //Curent Stage
    public int _stage = 1;

    //Curent Playtime
    public float _playtime;

    //Curent BattleMode
    public bool _isBattle;

    //Enemy All Spawn
    public bool _isAllSpawn;

    //Enemy Count
    public int _enemyCntA;
    public int _enemyCntB;
    public int _enemyCntC;
    public int _enemyCntD;

    //Curent Hitting Enemys
    public Enemy _curHitEnemy;

    //Enemy Game Objects
    public GameObject _enemyA;
    public GameObject _enemyB;
    public GameObject _enemyC;
    public GameObject _enemyD;

    //Enemy Image
    public Sprite _enemyAImg;
    public Sprite _enemyBImg;
    public Sprite _enemyCImg;
    public Sprite _enemyDImg;

    //Enemy Spawn Point
    public Transform _spawnPoint1;
    public Transform _spawnPoint2;
    public Transform _spawnPoint3;
    public Transform _spawnPoint4;

    //List
    GameObject[] _enemyList;
    Transform[] _spawnPointList;



    //Panel UI
    public GameObject _gamePanel;
    public GameObject _menuPanel;
    public GameObject _gameOverPanel;

    //Menu Panel
    public Text _maxScoreText;

    //Game Over Panel
    public Text _gameOverScoreText;
    public Text _bestScoreText;

    //Game Panel
    public Text _scoreText;
    public Text _stageText;
    public Text _playTimeText;
    public Text _playerHealthText;
    public Text _playerAmmoText;
    public Text _playerCoinText;

    public Image _weapon1Image;
    public Image _weapon2Image;
    public Image _weapon3Image;
    public Image _weaponRImage;

    public Text _enemyAText;
    public Text _enemyBText;
    public Text _enemyCText;
    public GameObject _enemyHealthGroup;
    public RectTransform _enemyHealthBar;
    public Image _bossText;
    public Image _enemyImage;

    public GameObject _stageClearText;

    void Awake()
    {
        _maxScoreText.text = string.Format("{0:n0}", PlayerPrefs.GetInt("MaxScore"));

        if (PlayerPrefs.HasKey("MaxScore"))
        {
            PlayerPrefs.SetInt("MaxScore",0);
        }


        //List Init Setting
        InitSetting();
    }

    void InitSetting()
    {
        _enemyList = new GameObject[4];
        _spawnPointList = new Transform[4];

        _enemyList[0] = _enemyA;
        _enemyList[1] = _enemyB;
        _enemyList[2] = _enemyC;
        _enemyList[3] = _enemyD;

        _spawnPointList[0] = _spawnPoint1;
        _spawnPointList[1] = _spawnPoint2;
        _spawnPointList[2] = _spawnPoint3;
        _spawnPointList[3] = _spawnPoint4;
    }

    public void GameStart()
    {
        _menuCam.SetActive(false);
        _gameCam.SetActive(true);

        _menuPanel.SetActive(false);
        _gamePanel.SetActive(true);

        _player.gameObject.SetActive(true);

        _enemyHealthGroup.SetActive(false);
    }

    void Update()
    {
        if (_isBattle)
        {
            _playtime += Time.deltaTime;
        }
    }

    void LateUpdate()
    {
        //업데이트가 끝났을 때 후처리

        //Score
        _scoreText.text = string.Format("{0:n0}", _player._score);

        //Stage
        _stageText.text = "Stage " + _stage;

        //Playtime
        int hour = (int)_playtime / 3600;
        int min = (int)(_playtime - hour * 3600) / 60;
        int second = (int)_playtime % 60;
        _playTimeText.text = string.Format("{0:00}", hour) + ":"
                            + string.Format("{0:00}", min) + ":"
                            + string.Format("{0:00}", second);

        //Player Status
        _playerHealthText.text = _player._health + " / " + _player._maxHealth;
        _playerCoinText.text = string.Format("{0:n0}", _player._coin);

        if (_player._equipWeapon == null)
        {
            _playerAmmoText.text = "- / " + _player._ammo;
        }
        else if (_player._equipWeapon._type == Weapon.Type.Melee)
        {
            _playerAmmoText.text = "- / " + _player._ammo;
        }
        else
        {
            _playerAmmoText.text = _player._equipWeapon._curAmmo + " / " + _player._ammo;
        }

        //Equip 
        _weapon1Image.color = new Color(1, 1, 1, _player._hasWeapons[0] ? 1 : 0);
        _weapon2Image.color = new Color(1, 1, 1, _player._hasWeapons[1] ? 1 : 0);
        _weapon3Image.color = new Color(1, 1, 1, _player._hasWeapons[2] ? 1 : 0);
        _weaponRImage.color = new Color(1, 1, 1, _player._hasGrenades > 0 ? 1 : 0);

        //Enemy Count
        _enemyAText.text = " x " + _enemyCntA.ToString();
        _enemyBText.text = " x " + _enemyCntB.ToString();
        _enemyCText.text = " x " + _enemyCntC.ToString();

        //Enemy Health
        if (_curHitEnemy != null)
        {

            _enemyHealthBar.localScale =
                new Vector3((float)_curHitEnemy._curHealth / _curHitEnemy._maxHealth, 1, 1);

            switch (_curHitEnemy._enemyType)
            {
                case Enemy.Type.A:
                    _enemyImage.sprite = _enemyAImg;
                    _bossText.enabled = false;
                    break;
                case Enemy.Type.B:
                    _enemyImage.sprite = _enemyBImg;
                    _bossText.enabled = false;
                    break;
                case Enemy.Type.C:
                    _enemyImage.sprite = _enemyCImg;
                    _bossText.enabled = false;
                    break;
                case Enemy.Type.D:
                    _enemyImage.sprite = _enemyDImg;
                    _bossText.enabled = true;
                    break;
            }

            _enemyHealthGroup.SetActive(true);
        }
    }

    public void StageStart()
    {
        //Object Active false
        _itemShop.SetActive(false);
        _weaponShop.SetActive(false);
        _startZone.SetActive(false);
        _spawnPoint1.gameObject.SetActive(true);
        _spawnPoint2.gameObject.SetActive(true);
        _spawnPoint3.gameObject.SetActive(true);
        _spawnPoint4.gameObject.SetActive(true);

        //Battle Flag
        _isBattle = true;

        //Battle Coroutine Start
        StartCoroutine(InBattle());
    }

    public void StageEnd()
    {
        //Stage Clear Text DeActive
        _stageClearText.SetActive(false);

        //Player Set Init Position
        _player.transform.position = Vector3.up * 0.8f;

        //Object Active true
        _itemShop.SetActive(true);
        _weaponShop.SetActive(true);
        _startZone.SetActive(true);
        _spawnPoint1.gameObject.SetActive(false);
        _spawnPoint2.gameObject.SetActive(false);
        _spawnPoint3.gameObject.SetActive(false);
        _spawnPoint4.gameObject.SetActive(false);

        //Battle Flag
        _isBattle = false;

        //Spawn Flag
        _isAllSpawn = false;

        //Next Stage
        _stage += 1;
    }

    IEnumerator InBattle()
    {
        //Stage Data Load
        TextAsset stageData = Resources.Load("stage" + _stage) as TextAsset;
        StringReader stringReader = new StringReader(stageData.text);

        while (stringReader != null)
        {
            string line = stringReader.ReadLine();

            if (line == null)
            {
                _isAllSpawn = true;
                break;
            }
            float time = float.Parse(line.Split(',')[0]);
            int pos = int.Parse(line.Split(',')[1]);
            int type = int.Parse(line.Split(',')[2]);

            // 적 생성 시간
            yield return new WaitForSeconds(time);
            CreateEnemy(pos, type);

        }
        yield return new WaitForSeconds(1);
        stringReader.Close();
    }

    void CreateEnemy(int spawnPos, int enemyType)
    {
        //Spawn Enemy
        GameObject spawnEnemy = Instantiate(_enemyList[enemyType], _spawnPointList[spawnPos].position, Quaternion.identity);
        Enemy enemyLogic = spawnEnemy.GetComponent<Enemy>();
        enemyLogic.InitSetting(this, _player.transform);

        //Enemy Count
        EnemyCounting(enemyType, 1);
        
    }

    public void EnemyCounting(int enemyType, int add)
    {
        switch (enemyType)
        {
            case 0:
                _enemyCntA += add;
                break;
            case 1:
                _enemyCntB += add;
                break;
            case 2:
                _enemyCntC += add;
                break;
            case 3:
                _enemyCntD += add;
                break;
        }

        if (_isBattle && _isAllSpawn && _enemyCntA +_enemyCntB + _enemyCntC + _enemyCntD == 0)
        {
            //Stage Clear Message
            _stageClearText.SetActive(true);
            //Stage End
            Invoke("StageEnd", 5f);
            //Stage Clear Sound
            _player.SoundPlay(Player.SoundType.StageClear);
        }
    }

    public void GameOver()
    {
        //MaxScore Set
        if (PlayerPrefs.GetInt("MaxScore") < _player._score)
        {
            PlayerPrefs.SetInt("MaxScore", _player._score);
            _bestScoreText.gameObject.SetActive(true);
        }
        _gameOverScoreText.text = _scoreText.text;
        _gameOverPanel.SetActive(true);
    }

    public void Retry()
    {
        SceneManager.LoadScene(0);
    }
}
