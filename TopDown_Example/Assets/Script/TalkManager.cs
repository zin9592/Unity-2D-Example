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
        _talkData.Add(1000, new string[] { "�ȳ�?:0", "�� ���� ó�� �Ա���?:1" });
        _portraitData.Add(1000 + 0, _portraitArr[0]);
        _portraitData.Add(1000 + 1, _portraitArr[1]);
        _portraitData.Add(1000 + 2, _portraitArr[2]);
        _portraitData.Add(1000 + 3, _portraitArr[3]);

        // NPC_A Quest Talk
        _talkData.Add(10 + 1000, new string[]{  "���.:0",
                                                "�� ������ ���� ������ �ִٴµ�..:1",
                                                "������ ȣ�� �ʿ� �絵�� �˷��ٰž�:1"});

        // NPC_B
        _talkData.Add(2000, new string[] { "�ȳ�?:1", "�� ȣ���� ���� �Ƹ�����?:0", "��� �� ȣ������ ������ ����� ������ �ִٰ� ��.:1" });
        _portraitData.Add(2000 + 0, _portraitArr[4]);
        _portraitData.Add(2000 + 1, _portraitArr[5]);
        _portraitData.Add(2000 + 2, _portraitArr[6]);
        _portraitData.Add(2000 + 3, _portraitArr[7]);

        // NPC_B Quest Talk
        _talkData.Add(11 + 2000, new string[]{  "�ȳ�.:0",
                                                "�� ȣ���� ���ؼ� ��̰� �ִ�?:1",
                                                "�׷��� ���� �����ټ� �ְھ�?:1",
                                                "�� �� ��ó�� ������ ���� �� �ֿ������� ��.:1"});

        // Box
        _talkData.Add(100, new string[] { "����� �������ڴ�." });

        // Desk
        _talkData.Add(200, new string[] { "������ ����ߴ� ������ �ִ� å���̴�." });
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
