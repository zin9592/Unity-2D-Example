using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range };
    public Type _type;
    public int _damage;
    public float _rate;
    public BoxCollider _meleeArea;
    public TrailRenderer _trailEffect;

    public void Use()
    {
        if(_type == Type.Melee)
        {
            StopCoroutine("Swing");
            StartCoroutine("Swing");
        }
    }

    IEnumerator Swing()
    {
        yield return new WaitForSeconds(0.1f);
        _meleeArea.enabled = true;
        _trailEffect.enabled = true;

        yield return new WaitForSeconds(0.3f);
        _meleeArea.enabled = false;

        yield return new WaitForSeconds(0.3f);
        _trailEffect.enabled = false;
        
    }

    // 일반루틴 : Use() 메인루틴 -> Swing() 서브루틴 -> Use() 메인루틴
    //  코루틴 : Use() 메인루틴 + Swing() 코루틴(Co-Op)
}
