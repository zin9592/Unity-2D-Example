using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    Rigidbody2D rigid;

    // 행동지표를 결정할 변수 하나 생성
    public int nextMove;

    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();

        // 주어진 시간이 지난 뒤 지정된 함수를 실행하는 함수
        Invoke("Think", 3);
    }


    void FixedUpdate()
    {
        rigid.velocity = new Vector2(nextMove,rigid.velocity.y);
    }

    // 몬스터의 행동지표를 바꿔줄 함수
    // 재귀함수
    void Think()
    {
        // Random.Range() : 최소 ~ 최대 범위의 랜덤 수 생성(최대는 제외됨)
        // 왼쪽, 정지, 오른쪽 변수
        nextMove = Random.Range(-1,2);

        // 딜레이 필요 무조건
        Invoke("Think", 3);
        //Think();
    }
}
