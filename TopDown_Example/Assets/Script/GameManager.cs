using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject _talkPanel;
    public Text _talkText;
    public bool _isAction;
    public GameObject _scanObject;
    public TalkManager _talkManager;
    public int _talkIndex;
    public Image portraitImg;

    //상호작용
    public void Action(GameObject scanObject)
    {
        _scanObject = scanObject;
        ObjectData objectData = _scanObject.GetComponent<ObjectData>();
        Talk(objectData._id, objectData._isNPC);
        _talkPanel.SetActive(_isAction);
    }

    void Talk(int id, bool isNPC)
    {
        string talkData = _talkManager.GetTalk(id, _talkIndex);

        if (talkData == null)
        {
            _isAction = false;
            _talkIndex = 0;
            return;
        }

        if (isNPC)
        {
            _talkText.text = talkData;
            portraitImg.color = new Color(1, 1, 1, 1);
        }
        else
        {
            _talkText.text = talkData;
            portraitImg.color = new Color(1, 1, 1, 0);
        }
        _isAction = true;
        _talkIndex++;
    }
}
