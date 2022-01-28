using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public int _questId;
    public int _questActionIndex;
    public GameObject[] _questObject;

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
        _questList.Add(30, new QuestData(   "퀘스트 올 클리어",
                                            new int[] { 0 }));
    }

    public int GetQuestTalkIndex(int id)
    {
        // NPC ID를 받고 퀘스트 번호를 반환하는 함수
        return _questId + _questActionIndex;
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

    // 다음 연계 퀘스트
    public void NextQuest()
    {
        _questId += 10;
        _questActionIndex = 0;
    }

    // 퀘스트 오브젝트 관리
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
