using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grenade : MonoBehaviour
{
    public GameObject _meshObj;
    public GameObject _effectObj;
    public GameObject _explosionAreaObj;
    GameObject _Area;
    public Rigidbody _rigidbody;


    void Start()
    {
        StartCoroutine(Explosion());
    }

    void Update()
    {
        if (_Area != null)
        {
            _Area.transform.position = transform.position;
        }
    }

    IEnumerator Explosion()
    {
        _Area = Instantiate(_explosionAreaObj, transform.position, transform.rotation);
        yield return new WaitForSeconds(3f);
        _rigidbody.velocity = Vector3.zero;
        _rigidbody.angularVelocity = Vector3.zero;
        _meshObj.SetActive(false);
        _effectObj.SetActive(true);
        Destroy(_Area.gameObject);

        // 구체 모양의 레이 캐스팅
        
        RaycastHit[] rayHits = Physics.SphereCastAll(transform.position, 
                                                        15f, 
                                                        Vector3.up, 
                                                        0f, 
                                                        LayerMask.GetMask("Enemy"));

        foreach(RaycastHit hitObj in rayHits)
        {
            hitObj.transform.GetComponent<Enemy>().HitByGrenade(transform.position);
        }




        yield return new WaitForSeconds(3f);
        Destroy(gameObject);
    }
}
