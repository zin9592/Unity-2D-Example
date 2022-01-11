using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{
    Rigidbody2D rigid;
    Animator animator;
    SpriteRenderer spriteRenderer;
    CapsuleCollider2D capsuleCollider;

    // 행동지표를 결정할 변수 하나 생성
    public int nextMove;
    public int moveSpeed;

    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        capsuleCollider = GetComponent<CapsuleCollider2D>();

        // 주어진 시간이 지난 뒤 지정된 함수를 실행하는 함수
        Invoke("Think", 3);
    }


    void FixedUpdate()
    {
        // Move
        rigid.velocity = new Vector2(nextMove * moveSpeed, rigid.velocity.y);

        // Platform Check
        Vector2 frontVec = new Vector2(rigid.position.x + (nextMove * 0.5f), rigid.position.y);
        Debug.DrawRay(frontVec, Vector3.down, Color.green);
        RaycastHit2D rayHit = Physics2D.Raycast(frontVec, Vector3.down, 1.5f, LayerMask.GetMask("Platform"));
        // 빔을 아래로 쏴서 맞으면 동작
        if (rayHit.collider == null)
        {
            Turn();
        }
    }

    // 몬스터의 행동지표를 바꿔줄 함수
    // 재귀함수
    void Think()
    {
        // Random.Range() : 최소 ~ 최대 범위의 랜덤 수 생성(최대는 제외됨)
        // RandomMoveSpeed
        nextMove = Random.Range(-1, 2);
        ChangeAnimation(nextMove);

        //Recursive
        float nextThinkTime = Random.Range(2f, 5f);
        Invoke("Think", nextThinkTime);
    }

    void ChangeAnimation(int nextMove)
    {
        // Animation
        animator.SetInteger("walkSpeed", nextMove);
        // direction
        if (nextMove != 0)
        {
            spriteRenderer.flipX = nextMove == 1;
        }
    }

    void Turn()
    {
        nextMove = nextMove * -1;
        ChangeAnimation(nextMove);
        // 모든 인보크 정지
        CancelInvoke();
        Invoke("Think", 1);
    }

    // 데미지 입음
    public void OnDamaged()
    {
        // CancleInvoke
        CancelInvoke();

        // nextMove 0
        nextMove = 0;
        ChangeAnimation(nextMove);

        // Sprite Alpha
        spriteRenderer.color = new Color(1, 1, 1, 0.4f);

        // Sprite Flip Y
        spriteRenderer.flipY = true;

        // Collider disable
        capsuleCollider.enabled = false;

        // Die Effect Jump
        rigid.AddForce(Vector2.up * 5, ForceMode2D.Impulse);

        // Destroy
        Invoke("DeActive", 5);
    }

    void DeActive()
    {
        gameObject.SetActive(false);
    }
}
