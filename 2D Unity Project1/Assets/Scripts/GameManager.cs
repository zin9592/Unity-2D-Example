using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public int totalPoint;
    public int stagePoint;
    public int stageIndex;
    public int health;

    public void NextStage()
    {
        stageIndex++;
        totalPoint += stagePoint;
        stagePoint = 0;
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            // health down
            health--;

            // Reset
            collision.attachedRigidbody.velocity = Vector2.zero;        // ³«ÇÏ¼Óµµ 0
            collision.transform.position = new Vector3(-5, 0, 0);
        }
    }
}
