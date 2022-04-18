using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour
{
    public enum Type
    {
        Player,
        Small,
        Midium,
        Large,
        Boss,
        Null
    }

    Animator _anim;

    private void Awake()
    {
        _anim = GetComponent<Animator>();
    }

    void OnEnable()
    {
        Invoke("Disable", 2f);
    }
    void Disable()
    {
        gameObject.SetActive(false);
    }

    public void StartExplosion(Type type)
    {
        _anim.SetTrigger("OnExplosion");

        switch (type)
        {
            case Type.Small:
                transform.localScale = Vector3.one * 0.7f;
                break;
            case Type.Player:
            case Type.Midium:
                transform.localScale = Vector3.one * 1f;
                break;
            case Type.Large:
                transform.localScale = Vector3.one * 2f;
                break;
            case Type.Boss:
                transform.localScale = Vector3.one * 3f;
                break;
            default:
                transform.localScale = Vector3.one * 1f;
                break;
        }
    }
}
