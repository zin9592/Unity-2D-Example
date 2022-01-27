using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TalkManager : MonoBehaviour
{
    Dictionary<int, string[]> _talkData;
    Dictionary<int, Sprite> _portraitData;

    public Sprite[] _portraitArr;

    void Awake()
    {
        _talkData = new Dictionary<int, string[]>();
        _portraitData = new Dictionary<int, Sprite>();
        GenerateData();
    }

    void GenerateData()
    {
        // NPC_A
        _talkData.Add(1000, new string[] { "안녕?:0", "이 곳에 처음 왔구나?:1" });
        _portraitData.Add(1000 + 0, _portraitArr[0]);
        _portraitData.Add(1000 + 1, _portraitArr[1]);
        _portraitData.Add(1000 + 2, _portraitArr[2]);
        _portraitData.Add(1000 + 3, _portraitArr[3]);

        // NPC_A Quest Talk
        _talkData.Add(10 + 1000, new string[]{  "어서와.:0",
                                                "이 마을에 놀라운 전설이 있다는데..:1",
                                                "오른쪽 호수 쪽에 루도가 알려줄거야:1"});

        // NPC_B
        _talkData.Add(2000, new string[] { "안녕?:1", "이 호수는 정말 아름답지?:0", "사실 이 호수에는 무언가의 비밀이 숨겨져 있다고 해.:1" });
        _portraitData.Add(2000 + 0, _portraitArr[4]);
        _portraitData.Add(2000 + 1, _portraitArr[5]);
        _portraitData.Add(2000 + 2, _portraitArr[6]);
        _portraitData.Add(2000 + 3, _portraitArr[7]);

        // NPC_B Quest Talk
        _talkData.Add(11 + 2000, new string[]{  "안녕.:0",
                                                "이 호수에 대해서 흥미가 있니?:1",
                                                "그러면 조금 도와줄수 있겠어?:1",
                                                "내 집 근처에 떨어진 동전 좀 주워줬으면 해.:1"});

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

    public Sprite GetPortrait(int id, int portraitIndex)
    {
        return _portraitData[id + portraitIndex];
    }
}
