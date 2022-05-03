using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range };
    public Type _type;
    public int _damage;
    public float _rate;
    public int _maxAmmo;
    public int _curAmmo;

    public BoxCollider _meleeArea;
    public TrailRenderer _trailEffect;
    public Transform _bulletPos;
    public GameObject _bullet;
    public Transform _bulletCasePos;
    public GameObject _bulletCase;

    public void Use()
    {
        if(_type == Type.Melee)
        {
            StopCoroutine("Swing");
            StartCoroutine("Swing");
        }else if(_type == Type.Range && _curAmmo > 0)
        {
            _curAmmo--;
            StartCoroutine("Shot");
        }
    }

    IEnumerator Swing()
    {
        //1. 무기 충돌범위 및 휘두르는 효과 on
        yield return new WaitForSeconds(0.1f);
        _meleeArea.enabled = true;
        _trailEffect.enabled = true;

        //2. 충돌범위 off
        yield return new WaitForSeconds(0.3f);
        _meleeArea.enabled = false;

        //3. 효과 off
        yield return new WaitForSeconds(0.3f);
        _trailEffect.enabled = false;
        
    }

    IEnumerator Shot()
    {
        //1. 총알발사
        GameObject instantBullet = Instantiate(_bullet,_bulletPos.position,_bulletPos.rotation);
        Rigidbody bulletRigid = instantBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = _bulletPos.forward * 50;
        yield return null;

        //2. 탄피배출
        GameObject instantCase = Instantiate(_bulletCase, _bulletCasePos.position, _bulletCasePos.rotation);
        Rigidbody caseRigid = instantCase.GetComponent<Rigidbody>();
        Vector3 caseVec = _bulletCasePos.forward * Random.Range(-3, -2) + Vector3.up * Random.Range(2, 3);
        caseRigid.AddForce(caseVec,ForceMode.Impulse);
        caseRigid.AddTorque(Vector3.up * 10, ForceMode.Impulse);
    }

    // 일반루틴 : Use() 메인루틴 -> Swing() 서브루틴 -> Use() 메인루틴
    //  코루틴 : Use() 메인루틴 + Swing() 코루틴(Co-Op)
}
