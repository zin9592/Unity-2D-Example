using System.Collections;
using System.Collections.Generic;

public class QuestData
{
    public string _questName;   // ����Ʈ�� �̸�
    public int[] _npcId;        // �ش� ����Ʈ�� ������ NPC �� ����

    public QuestData(string questName, int[] npcId)
    {
        _questName = questName;
        _npcId = npcId;
    }
}
