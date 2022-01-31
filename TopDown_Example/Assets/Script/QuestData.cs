using System.Collections;
using System.Collections.Generic;

public class QuestData
{
    public string _questName;   // 퀘스트의 이름
    public int[] _npcId;        // 해당 퀘스트와 연관된 NPC 및 순서

    public QuestData(string questName, int[] npcId)
    {
        _questName = questName;
        _npcId = npcId;
    }
}
