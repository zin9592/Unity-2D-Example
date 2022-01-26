using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TalkManager : MonoBehaviour
{
    Dictionary<int, string[]> _talkData;

    void Awake()
    {
        _talkData = new Dictionary<int, string[]>();
        GenerateData();
    }

    void GenerateData()
    {
        // NPC_A
        _talkData.Add(1000, new string[] { "안녕?", "이 곳에 처음 왔구나?" });

        // NPC_B
        _talkData.Add(2000, new string[] { "안녕?", "이 호수는 정말 아름답지?", "사실 이 호수에는 무언가의 비밀이 숨겨져 있다고 해." });

        // Box
        _talkData.Add(100, new string[] { "평범한 나무상자다." });

        // Desk
        _talkData.Add(200, new string[] { "누군가 사용했던 흔적이 있는 책상이다." });
    }

    public string GetTalk(int id, int talkIndex)
    {
        if (talkIndex == _talkData[id].Length)
        {
            return null;
        }
        else
        {
            return _talkData[id][talkIndex];
        }
    }
}
