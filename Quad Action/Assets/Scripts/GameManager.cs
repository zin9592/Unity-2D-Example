using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //Camera
    public GameObject _menuCam;
    public GameObject _gameCam;

    //Player
    public Player _player;

    //Boss
    public Boss _boss;

    //Curent Stage
    public int _stage = 1;

    //Curent Playtime
    public float _playtime;

    //Curent BattleMode
    public bool _isBattle;

    //Enemy Count
    public int _enemyCntA;
    public int _enemyCntB;
    public int _enemyCntC;

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

    //Panel UI
    public GameObject _gamePanel;
    public GameObject _menuPanel;

    //Menu Panel
    public Text _maxScoreText;

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




    void Awake()
    {
        _maxScoreText.text = string.Format("{0:n0}", PlayerPrefs.GetInt("MaxScore"));
    }

    public void GameStart()
    {
        _menuCam.SetActive(false);
        _gameCam.SetActive(true);

        _menuPanel.SetActive(false);
        _gamePanel.SetActive(true);

        _player.gameObject.SetActive(true);

        _enemyHealthGroup.SetActive(false);

        Invoke("createEnemy", 10f);
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
        _stageText.text = "STAGE " + _stage;

        //Playtime
        int hour = (int)_playtime / 3600;
        int min = (int)(_playtime - hour * 3600) / 60;
        int second = (int)_playtime % 60;
        _playTimeText.text = string.Format("{0:00}", hour)
                            + string.Format("{0:00}", min)
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

    void createEnemy()
    {
        _isBattle = true;
        GameObject testEnemy1 = Instantiate(_enemyA, _spawnPoint1.position, _spawnPoint1.rotation);
        Enemy enemyLogic1 = testEnemy1.GetComponent<Enemy>();
        enemyLogic1.InitSetting(this, _player.transform);

        GameObject testEnemy2 = Instantiate(_enemyB, _spawnPoint2.position, _spawnPoint2.rotation);
        Enemy enemyLogic2 = testEnemy2.GetComponent<Enemy>();
        enemyLogic2.InitSetting(this, _player.transform);

        GameObject testEnemy3 = Instantiate(_enemyC, _spawnPoint3.position, _spawnPoint3.rotation);
        Enemy enemyLogic3 = testEnemy3.GetComponent<Enemy>();
        enemyLogic3.InitSetting(this, _player.transform);

        GameObject testEnemy4 = Instantiate(_enemyD, _spawnPoint4.position, _spawnPoint4.rotation);
        Enemy enemyLogic4 = testEnemy4.GetComponent<Enemy>();
        enemyLogic4.InitSetting(this, _player.transform);
    }
}
