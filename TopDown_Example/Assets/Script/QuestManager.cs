using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public int _questId;
    public int _questActionIndex;
    Dictionary<int, QuestData> _questList;
    

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
    }

    public int GetQuestTalkIndex(int id)
    {
        // NPC ID�� �ް� ����Ʈ ��ȣ�� ��ȯ�ϴ� �Լ�
        return _questId + _questActionIndex;
    }

    public string CheckQuest(int id)
    {
        // Chain Quset
        if (id == _questList[_questId]._npcId[_questActionIndex])
        {
            _questActionIndex++;
        }
        // Next Quest
        if(_questActionIndex == _questList[_questId]._npcId.Length)
        {
            NextQuest();
        }

        return _questList[_questId]._questName;
    }

    public void NextQuest()
    {
        _questId += 10;
        _questActionIndex = 0;
    }
}
