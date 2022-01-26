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

    //��ȣ�ۿ�
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
            talkText.text = "�̰��� �̸���" + scanObject.name + "�Դϴ�.";
        }
        talkPanel.SetActive(isAction);
    }
}
