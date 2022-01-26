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
        _talkData.Add(1000, new string[] { "�ȳ�?", "�� ���� ó�� �Ա���?" });

        // NPC_B
        _talkData.Add(2000, new string[] { "�ȳ�?", "�� ȣ���� ���� �Ƹ�����?", "��� �� ȣ������ ������ ����� ������ �ִٰ� ��." });

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
}
