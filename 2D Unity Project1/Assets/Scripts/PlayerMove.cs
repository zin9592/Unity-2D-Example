using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    public GameManager gameManager;
    public AudioClip audioJump;
    public AudioClip audioAttack;
    public AudioClip audioDamaged;
    public AudioClip audioItem;
    public AudioClip audioDie;
    public AudioClip audioFinish;
    public float maxSpeed;
    public float JumpPower;
    public float direction;

    Rigidbody2D rigid;
    SpriteRenderer spriteRenderer;
    CapsuleCollider2D capsuleCollider;
    Animator animator;
    AudioSource audioSource;

    enum SoundType
    {
        Jump,
        Attack,
        Damaged,
        Item,
        Die,
        Finish
    }
    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
        capsuleCollider = GetComponent<CapsuleCollider2D>();
        audioSource = GetComponent<AudioSource>();
    }

    void PlaySound(SoundType action)
    {
        switch (action)
        {
            case SoundType.Jump:
                audioSource.clip = audioJump;
                break;
            case SoundType.Attack:
                audioSource.clip = audioAttack;
                break;
            case SoundType.Damaged:
                audioSource.clip = audioDamaged;
                break;
            case SoundType.Item:
                audioSource.clip = audioItem;
                break;
            case SoundType.Die:
                audioSource.clip = audioDie;
                break;
            case SoundType.Finish:
                audioSource.clip = audioFinish;
                break;
        }
        audioSource.Play();
    }
    void Update()
    {

        // Jump
        if (Input.GetButtonDown("Jump") && !animator.GetBool("isJumping"))
        {
            rigid.AddForce(Vector2.up * JumpPower, ForceMode2D.Impulse);
            animator.SetBool("isJumping", true);
            PlaySound(SoundType.Jump);
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
                if (rayHit.distance < 0.7f)
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

            // transform.localScale.y * 0.2f 이유, 가만히 있어도 y좌표가 적의 좌표보다 높아서..
            if (rigid.velocity.y < 0 &&
                transform.position.y - transform.localScale.y * 0.2f > collision.contacts[0].point.y &&
                collision.gameObject.name == "Enemy")
            {
                // 만약 캐릭터가 적보다 위에있고, 낙하중이라면 공격
                OnAttack(collision.transform);
                gameManager.stagePoint += 100;
            }
            else
            {
                // 아니라면 데미지입음
                OnDamaged(collision);
            }
        }
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        // 동전 획득시 발동
        if (collider.gameObject.tag == "Item")
        {
            //item get sound
            PlaySound(SoundType.Item);
            //add score
            bool isBronze = collider.gameObject.name.Contains("Bronze");
            bool isSilver = collider.gameObject.name.Contains("Silver");
            bool isGold = collider.gameObject.name.Contains("Gold");

            if (isBronze)
            {
                gameManager.stagePoint += 50;
            }
            else if (isSilver)
            {
                gameManager.stagePoint += 100;
            }
            else if (isGold)
            {
                gameManager.stagePoint += 300;
            }
            //disable object
            collider.gameObject.SetActive(false);
        }
        else if (collider.gameObject.tag == "Finish")
        {
            //FinishSound
            PlaySound(SoundType.Finish);
            //next stage (GameManager)
            gameManager.NextStage();

        }
    }

    void OnAttack(Transform enemy)
    {
        // AttackSound
        PlaySound(SoundType.Attack);

        // Point
        rigid.AddForce(Vector2.up * 15, ForceMode2D.Impulse);

        // Enemy Die
        EnemyMove enemyMove = enemy.GetComponent<EnemyMove>();
        enemyMove.OnDamaged();
    }

    // Character On Damaged
    void OnDamaged(Collision2D collision)
    {
        //DamagedSound
        PlaySound(SoundType.Damaged);

        // First collision point x
        // Debug.Log(collision.contacts[0].point.x);

        //Health down
        gameManager.HealthDown();

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

    public void OnDie()
    {
        //DieSound
        PlaySound(SoundType.Die);

        // Sprite Alpha
        spriteRenderer.color = new Color(1, 1, 1, 0.4f);

        // Sprite Flip Y
        spriteRenderer.flipY = true;

        // Collider disable
        capsuleCollider.enabled = false;

        // Die Effect Jump
        rigid.AddForce(Vector2.up * 5, ForceMode2D.Impulse);
    }

    // 캐릭터 정지
    public void VelocityZero()
    {
        rigid.velocity = Vector2.zero;
    }
}
