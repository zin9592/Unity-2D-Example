using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject talkPanel;
    public Text talkText;
    public bool isAction;
    public GameObject scanObject;

    //상호작용
    public void Action(GameObject _scanObject)
    {
        if (isAction)
        {
            //Exit Action
            isAction = false;
        }
        else
        {   //Enter Action
            isAction = true;
            scanObject = _scanObject;
            talkText.text = "이것의 이름은" + scanObject.name + "입니다.";
        }
        talkPanel.SetActive(isAction);
    }
}
