using System.Collections;
using System.Collections.Generic;

public class QuestData
{
    public string _questName;
    public int[] _npcId;

    public QuestData(string questName, int[] npcId)
    {
        _questName = questName;
        _npcId = npcId;
    }
}
