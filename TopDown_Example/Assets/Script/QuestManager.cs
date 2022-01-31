using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public int _questId;                    //���� ���� ����Ʈ ID
    public int _questActionIndex;           //����Ʈ ��ȭ����
    public GameObject[] _questObject;       //����Ʈ���� ������Ʈ

    Dictionary<int, QuestData> _questList;  //����Ʈ ���
    

    void Awake()
    {
        _questList = new Dictionary<int, QuestData>();
        GenerateData();
    }

    void GenerateData()
    {
        _questList.Add(10, new QuestData(   "���������� ��ȭ�ϱ�.",
                                            new int[] {1000, 2000}));
        _questList.Add(20, new QuestData(   "�絵�� ���� ã���ֱ�.",
                                            new int[] { 5000, 2000 }));
        _questList.Add(30, new QuestData(   "����Ʈ �� Ŭ����",
                                            new int[] { 0 }));
    }

    // NPC ID�� �ް� ����Ʈ ��ȣ�� ��ȯ�ϴ� �Լ�
    // _questId : ����Ʈ ��ȣ
    // _questActionIndex : ����Ʈ �������
    public int GetQuestTalkIndex(int id)
    {
        return _questId + _questActionIndex;
    }

    // Overloading
    public string CheckQuest()
    {
        return _questList[_questId]._questName;
    }

    public string CheckQuest(int id)
    {
        // Next Talk Quset
        if (id == _questList[_questId]._npcId[_questActionIndex])
        {
            _questActionIndex++;
        }

        //Control Quest Object
        ControlObject();

        // Next Quest
        if (_questActionIndex == _questList[_questId]._npcId.Length)
        {
            NextQuest();
        }

        return _questList[_questId]._questName;
    }

    // ���� ���� ����Ʈ
    public void NextQuest()
    {
        _questId += 10;
        _questActionIndex = 0;
    }

    // ����Ʈ ������Ʈ ����
    void ControlObject()
    {
        switch (_questId)
        {
            case 10:
                if (_questActionIndex == 2)
                {
                    _questObject[0].SetActive(true);
                }
                break;
            case 20:
                if (_questActionIndex == 1)
                {
                    _questObject[0].SetActive(false);
                }
                break;
        }
    }
}
