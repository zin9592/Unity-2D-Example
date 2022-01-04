using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    Rigidbody2D rigid;

    // �ൿ��ǥ�� ������ ���� �ϳ� ����
    public int nextMove;

    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();

        // �־��� �ð��� ���� �� ������ �Լ��� �����ϴ� �Լ�
        Invoke("Think", 3);
    }


    void FixedUpdate()
    {
        rigid.velocity = new Vector2(nextMove,rigid.velocity.y);
    }

    // ������ �ൿ��ǥ�� �ٲ��� �Լ�
    // ����Լ�
    void Think()
    {
        // Random.Range() : �ּ� ~ �ִ� ������ ���� �� ����(�ִ�� ���ܵ�)
        // ����, ����, ������ ����
        nextMove = Random.Range(-1,2);

        // ������ �ʿ� ������
        Invoke("Think", 3);
        //Think();
    }
}
