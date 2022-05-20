using System.Collections;
using UnityEngine;
using UnityEngine.AI;

public class Boss : Enemy
{
    // 미사일 오브젝트 및 미사일 발사위치
    public GameObject _missile;
    public Transform _missilePortA;
    public Transform _missilePortB;

    Vector3 _lookVec;   //플레이어의 움직임 예측 벡터
    Vector3 _tauntVec;  // 플레이어위치로 내려찍을 벡터
    public bool _isLook;   // 플레이어 바라보는 플래그 변수

    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _boxCollider = GetComponent<BoxCollider>();
        _meshRenderers = GetComponentsInChildren<MeshRenderer>();
        _navMeshAgent = GetComponent<NavMeshAgent>();
        _animator = GetComponentInChildren<Animator>();

        _navMeshAgent.isStopped = true;
        StartCoroutine(Think());
    }
    void Update()
    {
        if (_isDead)
        {
            StopAllCoroutines();
            return;
        }

        if (_isLook)
        {
            float h = Input.GetAxisRaw("Horizontal");
            float v = Input.GetAxisRaw("Vertical");
            _lookVec = new Vector3(h, 0, v) * 5f;   // 5f : 예측범위
            transform.LookAt(_target.position + _lookVec);
        }
        else
        {
            _navMeshAgent.SetDestination(_tauntVec);
        }
    }

    IEnumerator Think()
    {
        yield return new WaitForSeconds(0.1f);

        int randomAction = Random.Range(0, 5);

        switch (randomAction)
        {
            case 0:
            case 1:
                //미사일 패턴
                StartCoroutine(MissileShot());
                break;

            case 2:
            case 3:
                // 돌 굴러가는 패턴
                StartCoroutine(RockShot());
                break;

            case 4:
                // 점프 공격 패턴
                StartCoroutine(Taunt());
                break;
        }
    }

    IEnumerator MissileShot()
    {
        _animator.SetTrigger("doShot");
        // 첫번째 미사일 발사
        yield return new WaitForSeconds(0.2f);
        GameObject instantMissileA = Instantiate(_missile, _missilePortA.position, _missilePortA.rotation);
        BossMissile bossMissileA = instantMissileA.GetComponent<BossMissile>();
        bossMissileA._target = _target;

        // 두번째 미사일 발사
        yield return new WaitForSeconds(0.3f);
        GameObject instantMissileB = Instantiate(_missile, _missilePortB.position, _missilePortB.rotation);
        BossMissile bossMissileB = instantMissileB.GetComponent<BossMissile>();
        bossMissileB._target = _target;

        yield return new WaitForSeconds(2.5f);
        StartCoroutine(Think());
    }
    IEnumerator RockShot()
    {
        // 마지막으로 타겟을 바라본 위치로 돌 굴림
        _isLook = false;
        _animator.SetTrigger("doBigShot");
        GameObject instantRock = Instantiate(_bullet, transform.position, transform.rotation);
        yield return new WaitForSeconds(3f);
        _isLook = true;
        StartCoroutine(Think());
    }
    IEnumerator Taunt()
    {
        // 타운트할 위치는 타겟 위치에서 조금 더 예측방향으로 찍는다.
        _tauntVec = _target.position + _lookVec;
        
        // 잠깐동안 바라보는걸 멈추고
        // 점프하는동안 플레어이랑 충돌하여 밀리는걸 방지하기 위해
        // boxcollider false
        _isLook = false;
        _navMeshAgent.isStopped = false;
        _boxCollider.enabled = false;
        _animator.SetTrigger("doTaunt");
        yield return new WaitForSeconds(1.5f);
        _meleeArea.enabled = true;
        yield return new WaitForSeconds(0.5f);
        _meleeArea.enabled = false;

        yield return new WaitForSeconds(1f);
        _isLook = true;
        _navMeshAgent.isStopped = true;
        _boxCollider.enabled = true;
        StartCoroutine(Think());
    }


}
