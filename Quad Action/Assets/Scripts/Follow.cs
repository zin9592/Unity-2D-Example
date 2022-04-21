using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{
    public Transform _targer;
    public Vector3 _offset;

    void LateUpdate()
    {
        transform.position = _targer.position + _offset;
    }
}
