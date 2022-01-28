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

        _talkData.Add(20 + 1000, new string[]{  " �絵�� ����?:1",
                                                "���� �긮�� �ٴϸ� ������!:3",
                                                "���߿� �絵���� �Ѹ��� �ؾ߰ھ�.:3"});

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

        _talkData.Add(20 + 2000, new string[] { "ã���� �� ������ ��.:1" });

        _talkData.Add(21 + 2000, new string[] { "ã���༭ ����.:2" });

        // Box
        _talkData.Add(3000, new string[] { "����� �������ڴ�." });

        // Desk
        _talkData.Add(4000, new string[] { "������ ����ߴ� ������ �ִ� å���̴�." });

        // Coin
        _talkData.Add(20 + 5000, new string[] { "�絵�� �����̴�.", "�絵�� ������ �ֿ���." });
    }

    public string GetTalk(int id, int talkIndex)
    {
        if (!_talkData.ContainsKey(id))
        {
            if (!_talkData.ContainsKey(id - id % 10))
            {
                // ����Ʈ �� ó�� ��縶�� ���� ��,
                // �ƿ� �⺻ ��縦 ����ϵ���
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
                // �ش� ����Ʈ ���� ���� ��簡 ���� ��
                // ����Ʈ �� ó�� ��縦 ������ �´�.
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
