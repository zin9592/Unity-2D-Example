using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public enum Type { Ammo, Coin, Grenade, Heart, Weapon };
    public Type type;   // �������� Ÿ��
    public int value;   // �������� ��

    void Update()
    {
        transform.Rotate(Vector3.up * 20 * Time.deltaTime);    
    }
}
