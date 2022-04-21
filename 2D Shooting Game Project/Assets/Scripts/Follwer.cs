using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follwer : MonoBehaviour
{
    public float _curShotDelay;
    public float _maxShotDelay;
    public float _bulletSpeed;

    public ObjectManager _objectManager;
    
    public Vector3 _followPos;
    public int _followDelay;
    public Transform _parent;
    public Queue<Vector3> _parentPos;

    void Awake()
    {
        _parentPos = new Queue<Vector3>();    
    }

    void Update()
    {
        Watch();
        Follow();
        Fire();
        Reload();
    }

    void Watch()
    {
        //Queue = FIFO(First Input First Out)
        //#.Input Pos
        if (!_parentPos.Contains(_parent.position))
        {
            _parentPos.Enqueue(_parent.position);
        }

        //#.Output Pos
        if (_parentPos.Count > _followDelay)
        {
            // 큐에 일정 데이터가 쌓여야 따라오게 된다.
            _followPos = _parentPos.Dequeue();
        }else if(_parentPos.Count < _followDelay)
        {
            _followPos = _parent.position;
        }
    }

    void Follow()
    {
        
        transform.position = _followPos;
    }

    void Fire()
    {

        if (!Input.GetButton("Fire1"))
        {
            return;
        }

        if (_curShotDelay < _maxShotDelay)
        {
            return;
        }

        GameObject bullet = _objectManager.MakeObject(ObjectManager.Type.BulletFollwer);
        bullet.transform.position = transform.position;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        rigid.AddForce(Vector2.up * _bulletSpeed, ForceMode2D.Impulse);
        _curShotDelay = 0;
    }

    void Reload()
    {
        _curShotDelay += Time.deltaTime;
    }
}
