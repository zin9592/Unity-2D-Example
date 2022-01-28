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

        _talkData.Add(20 + 1000, new string[]{  " 루도의 동전?:1",
                                                "돈을 흘리고 다니면 못쓰지!:3",
                                                "나중에 루도에게 한마디 해야겠어.:3"});

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

        _talkData.Add(20 + 2000, new string[] { "찾으면 꼭 가져다 줘.:1" });

        _talkData.Add(21 + 2000, new string[] { "찾아줘서 고마워.:2" });

        // Box
        _talkData.Add(3000, new string[] { "평범한 나무상자다." });

        // Desk
        _talkData.Add(4000, new string[] { "누군가 사용했던 흔적이 있는 책상이다." });

        // Coin
        _talkData.Add(20 + 5000, new string[] { "루도의 동전이다.", "루도의 동전을 주웠다." });
    }

    public string GetTalk(int id, int talkIndex)
    {
        if (!_talkData.ContainsKey(id))
        {
            if (!_talkData.ContainsKey(id - id % 10))
            {
                // 퀘스트 맨 처음 대사마저 없을 때,
                // 아예 기본 대사를 출력하도록
                if (talkIndex == _talkData[id - id % 100].Length)
                {
                    return null;
                }
                else
                {
                    return _talkData[id - id % 100][talkIndex];
                }
            }
            else
            {
                // 해당 퀘스트 진행 순서 대사가 없을 때
                // 퀘스트 맨 처음 대사를 가지고 온다.
                if (talkIndex == _talkData[id - id % 10].Length)
                {
                    return null;
                }
                else
                {
                    return _talkData[id - id % 10][talkIndex];
                }
            }
        }

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
