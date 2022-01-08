using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    Rigidbody2D rigid;
    SpriteRenderer sprite;
    Animator animator;
    public float maxSpeed;
    public float JumpPower;
    float direction;

    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        sprite = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
    }
    void Update()
    {

        // Jump
        if (Input.GetButtonDown("Jump") && !animator.GetBool("isJumping"))
        {
            rigid.AddForce(Vector2.up * JumpPower, ForceMode2D.Impulse);
            animator.SetBool("isJumping", true);
        }
        /*
        if(animator.GetBool("isJumping") == true && rigid.velocity.y < 0)
        {
            animator.SetBool("isJumping", false);
        }
        */

        // Is Walking
        if (Mathf.Abs(rigid.velocity.x) < 0.4f)
        {
            animator.SetBool("isWalking", false);
        }
        else
        {
            animator.SetBool("isWalking", true);
        }

        // Stop Speed
        if (Input.GetButtonUp("Horizontal"))
        {
            rigid.velocity = new Vector2(rigid.velocity.normalized.x * 0.5f, rigid.velocity.y);
            // 미끄러짐 없음
            //rigid.velocity = new Vector2(0, rigid.velocity.y);
        }

        // Direction Sprite (수정됨 2022-01-01)
        direction = Input.GetAxisRaw("Horizontal");
        if (direction != 0)
        {
            sprite.flipX = direction == -1;    // flip default false
        }

    }

    void FixedUpdate()
    {
        // Move By Key Control
        float h = Input.GetAxisRaw("Horizontal");
        rigid.AddForce(Vector2.right * h, ForceMode2D.Impulse);

        if (rigid.velocity.x > maxSpeed) // Right Max Speed
        {
            rigid.velocity = new Vector2(maxSpeed, rigid.velocity.y);
        }
        else if (rigid.velocity.x < maxSpeed * (-1)) // Left Max Speed
        {
            rigid.velocity = new Vector2(maxSpeed * (-1), rigid.velocity.y);
        }

        // Landing Platform
        Debug.DrawRay(rigid.position, Vector3.down, Color.green);

        if (rigid.velocity.y < 0)
        {
            RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, Vector3.down, 1, LayerMask.GetMask("Platform"));
            // 빔을 아래로 쏴서 맞으면 동작
            if (rayHit.collider != null)
            {
                // 플레이어의 절반크기
                if (rayHit.distance < 0.5f)
                {
                    animator.SetBool("isJumping", false);
                }
            }
        }
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            OnDamaged(collision);
        }
    }

    void OnDamaged(Collision2D collision)
    {
        // 첫번째 충돌한 지점의 위치좌표
        Debug.Log(collision.contacts[0].point.x); 
        
        // Change Layer (Immotal Active)
        this.gameObject.layer = 9;

        // View Alpha
        sprite.color = new Color(1, 1, 1, 0.4f);

        // Reaction Force
        int dirc = transform.position.x - collision.contacts[0].point.x > 0 ? 1 : -1;
        rigid.AddForce(new Vector2(dirc, 1) * 7, ForceMode2D.Impulse);

        // Animation
        animator.SetTrigger("doDamaged");

        // 3 Seconds Immotal Active
        Invoke("OffDamaged", 3);
    }

    void OffDamaged()
    {
        // Change Layer (Immotal Active)
        this.gameObject.layer = 8;

        // View Alpha
        sprite.color = new Color(1, 1, 1, 1);
    }
}
