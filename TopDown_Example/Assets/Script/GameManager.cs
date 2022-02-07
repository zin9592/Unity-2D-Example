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


    void Start()
    {
        Debug.Log(_questManager.CheckQuest());    
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
            Debug.Log(_questManager.CheckQuest(id));
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
}
