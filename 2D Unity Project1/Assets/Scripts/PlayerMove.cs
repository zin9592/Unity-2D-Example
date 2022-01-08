using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    Rigidbody2D rigid;
    SpriteRenderer spriteRenderer;
    Animator animator;
    public float maxSpeed;
    public float JumpPower;
    float direction;

    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
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
        }

        // Direction Sprite
        direction = Input.GetAxisRaw("Horizontal");
        if (direction != 0)
        {
            spriteRenderer.flipX = direction == -1;    // flip default false
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
        //  Character and Enemy Collision 
        if (collision.gameObject.tag == "Enemy")
        {
            
            if (rigid.velocity.y < 0 && 
                transform.position.y > collision.contacts[0].point.y && 
                collision.gameObject.name == "Enemy")
            {
                // 만약 캐릭터가 적보다 위에있고, 낙하중이라면 공격
                OnAttack(collision.transform);
            }
            else
            {
                // 아니라면 데미지입음
                OnDamaged(collision);
            }
        }
    }

    void OnAttack(Transform enemy)
    {
        // Point
        rigid.AddForce(Vector2.up * 5, ForceMode2D.Impulse);

        // Enemy Die
        EnemyMove enemyMove = enemy.GetComponent<EnemyMove>();
        enemyMove.OnDamaged();
    }

    // Character On Damaged
    void OnDamaged(Collision2D collision)
    {
        // First collision point x
        Debug.Log(collision.contacts[0].point.x); 
        
        // Change Layer (Immotal Active)
        this.gameObject.layer = 9;

        // View Alpha
        spriteRenderer.color = new Color(1, 1, 1, 0.4f);

        // Reaction Force
        int dirc = transform.position.x - collision.contacts[0].point.x > 0 ? 1 : -1;
        rigid.AddForce(new Vector2(dirc, 1) * 7, ForceMode2D.Impulse);

        // Animation
        animator.SetTrigger("doDamaged");

        // 3 Seconds Immotal Active
        Invoke("OffDamaged", 3);
    }

    // Character Immotal Off
    void OffDamaged()
    {
        // Change Layer (Immotal Active)
        this.gameObject.layer = 8;

        // View Alpha
        spriteRenderer.color = new Color(1, 1, 1, 1);
    }
}
