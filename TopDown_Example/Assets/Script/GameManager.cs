using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{


    public GameObject _scanObject;
    public bool _isAction;
    public GameObject _talkPanel;
    public Image _portraitImg;
    public Text _talkText;
    public int _talkIndex;
    public TalkManager _talkManager;
    public QuestManager _questManager;

    //상호작용
    public void Action(GameObject scanObject)
    {
        //Get Front Object
        _scanObject = scanObject;
        ObjectData objectData = _scanObject.GetComponent<ObjectData>();
        Talk(objectData._id, objectData._isNPC);
        
        //Visible Talk for Action
        _talkPanel.SetActive(_isAction);
    }

    void Talk(int id, bool isNPC)
    {
        //Set Talk Data
        int questTalkIndex = _questManager.GetQuestTalkIndex(id);
        string talkData = _talkManager.GetTalk(id+questTalkIndex, _talkIndex);

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
            _talkText.text = talkData.Split(':')[0];
            _portraitImg.sprite = _talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            _portraitImg.color = new Color(1, 1, 1, 1);
        }
        else
        {
            //Object Talk
            _talkText.text = talkData;
            _portraitImg.color = new Color(1, 1, 1, 0);
        }
        _isAction = true;
        _talkIndex++;
    }
}
