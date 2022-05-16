using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public enum Type { A, B, C };
    public Type _enemyType;

    public int _maxHealth;
    public int _curHealth;
    public Transform _target;
    public BoxCollider _meleeArea;
    public GameObject _bullet;
    public bool _isChase;
    public bool _isAttack;

    Rigidbody _rigidbody;
    BoxCollider _boxCollider;
    Material _material;
    NavMeshAgent _navMeshAgent;
    Animator _animator;

    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _boxCollider = GetComponent<BoxCollider>();
        _material = GetComponentInChildren<MeshRenderer>().material;
        _navMeshAgent = GetComponent<NavMeshAgent>();
        _animator = GetComponentInChildren<Animator>();

        Invoke("ChaseStart", 2);
    }

    void ChaseStart()
    {
        _isChase = true;
        _animator.SetBool("isWalk", true);
    }

    void Update()
    {
        if (_navMeshAgent.enabled)
        {
            // 도착할 목표 위치 지정 함수
            _navMeshAgent.SetDestination(_target.position);
            _navMeshAgent.isStopped = !_isChase;
        }
    }

    void Targeting()
    {
        float targetRadius = 0;
        float targetRange = 0;

        switch (_enemyType)
        {
            case Type.A:
                targetRadius = 1.5f;
                targetRange = 3f;
                break;

            case Type.B:
                targetRadius = 1f;
                targetRange = 12f;
                break;

            case Type.C:
                targetRadius = 0.5f;
                targetRange = 25f;
                break;
        }

        /*
         * 설명
         * RayCast를 transform.position에서 앞쪽(Vector3.forward)으로 
         * 3f(targetRange)만큼 쏜다. 
         * 쏠때 반지름 1.5f(targetRadius) 구체형(SphereCast)을 쏘고 
         * 감지(LayerMask.GetMask("Player"))가 되면 rayHits에 추가
         */

        RaycastHit[] rayHits = Physics.SphereCastAll(transform.position,
                                                targetRadius,
                                                transform.forward,
                                                targetRange,
                                                LayerMask.GetMask("Player"));

        // Player Detect
        if (rayHits.Length > 0 && !_isAttack)
        {
            StartCoroutine(Attack());
        }
    }

    IEnumerator Attack()
    {
        _isChase = false;
        _isAttack = true;
        _animator.SetBool("isAttack", true);

        switch (_enemyType)
        {
            case Type.A:
                yield return new WaitForSeconds(0.2f);
                _meleeArea.enabled = true;

                yield return new WaitForSeconds(1f);
                _meleeArea.enabled = false;

                yield return new WaitForSeconds(1f);
                break;

            case Type.B:
                yield return new WaitForSeconds(0.1f);
                _rigidbody.AddForce(transform.forward*20,ForceMode.Impulse);
                _meleeArea.enabled = true;

                yield return new WaitForSeconds(0.5f);
                _rigidbody.velocity = Vector3.zero;
                _meleeArea.enabled = false;

                yield return new WaitForSeconds(2f);
                break;
            case Type.C:
                yield return new WaitForSeconds(0.5f);
                GameObject instantBullet = Instantiate(_bullet,
                                                        transform.position,
                                                        transform.rotation);
                Rigidbody rigidiBullet = instantBullet.GetComponent<Rigidbody>();
                rigidiBullet.velocity = transform.forward * 20;
                yield return new WaitForSeconds(2f);
                break;
        }

        _isChase = true;
        _isAttack = false;
        _animator.SetBool("isAttack", false);
    }

    void FixedUpdate()
    {
        Targeting();
        FreezeVelocity();
    }
    void FreezeVelocity()
    {
        if (_isChase)
        {
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Melee")
        {
            Weapon weapon = other.GetComponent<Weapon>();
            _curHealth -= weapon._damage;
            Vector3 reactVec = transform.position - other.transform.position;

            StartCoroutine(OnDamage(reactVec, false));
        }
        else if (other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            _curHealth -= bullet._damage;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(reactVec, false));
        }
    }

    IEnumerator OnDamage(Vector3 reactVec, bool isGrenade)
    {
        _material.color = Color.red;
        yield return new WaitForSeconds(0.1f);

        if (_curHealth > 0)
        {
            _material.color = Color.white;
        }
        else
        {
            // Enemy Dead
            _material.color = Color.gray;
            gameObject.layer = 13;
            _isChase = false;
            _navMeshAgent.enabled = false;
            _rigidbody.isKinematic = false;
            _animator.SetTrigger("doDie");

            if (isGrenade)
            {
                reactVec = reactVec.normalized;
                reactVec += Vector3.up * 3;

                _rigidbody.freezeRotation = false;
                _rigidbody.AddForce(reactVec * 5, ForceMode.Impulse);
                _rigidbody.AddTorque(reactVec * 15, ForceMode.Impulse);
            }
            else
            {
                reactVec = reactVec.normalized;
                reactVec += Vector3.up;
                _rigidbody.AddForce(reactVec * 10, ForceMode.Impulse);
            }
            Destroy(gameObject, 4f);
        }

    }

    public void HitByGrenade(Vector3 explosionPos)
    {
        _curHealth -= 100;
        Vector3 reactVec = transform.position - explosionPos;
        StartCoroutine(OnDamage(reactVec, true));
    }
}
