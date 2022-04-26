using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public enum Type { Ammo, Coin, Grenade, Heart, Weapon };
    public Type type;   // 아이템의 타입
    public int value;   // 아이템의 양

    void Update()
    {
        transform.Rotate(Vector3.up * 20 * Time.deltaTime);    
    }
}
