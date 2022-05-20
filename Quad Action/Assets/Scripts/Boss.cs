using System.Collections;
using UnityEngine;
using UnityEngine.AI;

public class Boss : Enemy
{
    // �̻��� ������Ʈ �� �̻��� �߻���ġ
    public GameObject _missile;
    public Transform _missilePortA;
    public Transform _missilePortB;

    Vector3 _lookVec;   //�÷��̾��� ������ ���� ����
    Vector3 _tauntVec;  // �÷��̾���ġ�� �������� ����
    public bool _isLook;   // �÷��̾� �ٶ󺸴� �÷��� ����

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
            _lookVec = new Vector3(h, 0, v) * 5f;   // 5f : ��������
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
                //�̻��� ����
                StartCoroutine(MissileShot());
                break;

            case 2:
            case 3:
                // �� �������� ����
                StartCoroutine(RockShot());
                break;

            case 4:
                // ���� ���� ����
                StartCoroutine(Taunt());
                break;
        }
    }

    IEnumerator MissileShot()
    {
        _animator.SetTrigger("doShot");
        // ù��° �̻��� �߻�
        yield return new WaitForSeconds(0.2f);
        GameObject instantMissileA = Instantiate(_missile, _missilePortA.position, _missilePortA.rotation);
        BossMissile bossMissileA = instantMissileA.GetComponent<BossMissile>();
        bossMissileA._target = _target;

        // �ι�° �̻��� �߻�
        yield return new WaitForSeconds(0.3f);
        GameObject instantMissileB = Instantiate(_missile, _missilePortB.position, _missilePortB.rotation);
        BossMissile bossMissileB = instantMissileB.GetComponent<BossMissile>();
        bossMissileB._target = _target;

        yield return new WaitForSeconds(2.5f);
        StartCoroutine(Think());
    }
    IEnumerator RockShot()
    {
        // ���������� Ÿ���� �ٶ� ��ġ�� �� ����
        _isLook = false;
        _animator.SetTrigger("doBigShot");
        GameObject instantRock = Instantiate(_bullet, transform.position, transform.rotation);
        yield return new WaitForSeconds(3f);
        _isLook = true;
        StartCoroutine(Think());
    }
    IEnumerator Taunt()
    {
        // Ÿ��Ʈ�� ��ġ�� Ÿ�� ��ġ���� ���� �� ������������ ��´�.
        _tauntVec = _target.position + _lookVec;
        
        // ��񵿾� �ٶ󺸴°� ���߰�
        // �����ϴµ��� �÷����̶� �浹�Ͽ� �и��°� �����ϱ� ����
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
