using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossRock : Bullet
{
    Rigidbody _rigidbody;
    float _angularPower = 2f;
    float _scaleValue = 0.1f;
    bool _isShoot;

    void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        StartCoroutine(GainPowerTimer());
        StartCoroutine(GainPower());
    }
    
    IEnumerator GainPowerTimer()
    {
        yield return new WaitForSeconds(2.2f);
        _isShoot = true;
    }

    IEnumerator GainPower()
    {
        while (_scaleValue <= 1f)
        {
            _angularPower += 0.02f;
            _scaleValue += 0.005f;
            transform.localScale = Vector3.one * _scaleValue;
            _rigidbody.AddTorque(transform.right * _angularPower ,ForceMode.Acceleration);
            yield return null;
        }
    }
}
