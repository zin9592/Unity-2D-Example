using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject _scanObject;
    public bool _isAction;
    public Image _portraitImg;
    public Animator _protraitAnimator;
    public Sprite _prevPortrait;
    public Animator _talkPanel;
    public int _talkIndex;
    public TalkManager _talkManager;
    public QuestManager _questManager;
    public TypeEffect _typeEffect;
    public GameObject _menuSet;
    AudioSource _menuAudio;
    public Text _questTalk;
    public GameObject _player;


    void Awake()
    {
        _menuAudio = GetComponent<AudioSource>();
    }

    void Start()
    {
        GameLoad();
        _questTalk.text = _questManager.CheckQuest();
    }

    void Update()
    {

        // 단발성 입력은 Update에서
        // Sub Menu
        if (Input.GetButtonDown("Cancel"))
        {
            if (_menuSet.activeSelf)
            {
                _menuSet.SetActive(false);
            }
            else
            {
                _menuSet.SetActive(true);
                _menuAudio.Play();
            }
        }
    }

    //상호작용
    public void Action(GameObject scanObject)
    {
        //Get Front Object
        _scanObject = scanObject;
        ObjectData objectData = _scanObject.GetComponent<ObjectData>();
        Talk(objectData._id, objectData._isNPC);

        //Visible Talk for Action
        _talkPanel.SetBool("isShow", _isAction);
    }

    void Talk(int id, bool isNPC)
    {
        int questTalkIndex = 0;
        string talkData = "";

        //Set Talk Data
        if (_typeEffect._isAnimation)
        {
            _typeEffect.SetMes("");
            return;
        }
        else
        {
            questTalkIndex = _questManager.GetQuestTalkIndex(id);
            talkData = _talkManager.GetTalk(id + questTalkIndex, _talkIndex);
        }
        //End Talk
        if (talkData == null)
        {
            _isAction = false;
            _talkIndex = 0;
            _questTalk.text = _questManager.CheckQuest(id);
            return;
        }
        if (isNPC)
        {
            //NPC Talk
            _typeEffect.SetMes(talkData.Split(':')[0]);

            //Show Portrait
            _portraitImg.sprite = _talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            _portraitImg.color = new Color(1, 1, 1, 1);

            //Animation Portait
            if (_prevPortrait != _portraitImg.sprite)
            {
                _protraitAnimator.SetTrigger("doEffect");
                _prevPortrait = _portraitImg.sprite;
            }
        }
        else
        {
            //Object Talk
            _typeEffect.SetMes(talkData);

            //Hide Portrait
            _portraitImg.color = new Color(1, 1, 1, 0);
        }
        _isAction = true;
        _talkIndex++;
    }

    public void GameSave()
    {
        PlayerPrefs.SetFloat("PlayerX", _player.transform.position.x);
        PlayerPrefs.SetFloat("PlayerY", _player.transform.position.y);
        PlayerPrefs.SetInt("QuestId", _questManager._questId);
        PlayerPrefs.SetInt("QuestActionIndex", _questManager._questActionIndex);
        PlayerPrefs.Save();

        _menuSet.SetActive(false);
    }

    public void GameLoad()
    {
        if (!PlayerPrefs.HasKey("PlayerX"))
        {
            return;
        }

        float x = PlayerPrefs.GetFloat("PlayerX");
        float y = PlayerPrefs.GetFloat("PlayerY");
        int questId = PlayerPrefs.GetInt("QuestId");
        int questActionIndex = PlayerPrefs.GetInt("QuestActionIndex");

        _player.transform.position = new Vector3(x, y, -2);
        _questManager._questId = questId;
        _questManager._questActionIndex = questActionIndex;
        _questManager.ControlObject();
    }

    public void GameExit()
    {
        Application.Quit();
    }
}
