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
        _questList.Add(10, new QuestData(   "마을사람들과 대화하기.",
                                            new int[] {1000, 2000}));
        _questList.Add(20, new QuestData(   "루도의 동전 찾아주기.",
                                            new int[] { 5000, 2000 }));
    }

    public int GetQuestTalkIndex(int id)
    {
        // NPC ID를 받고 퀘스트 번호를 반환하는 함수
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
