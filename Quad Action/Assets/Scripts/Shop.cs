using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    //Enter Shop
    public RectTransform _UIGroup;
    public Animator _animator;

    //Buy ITem
    public GameObject[] _itemObject;
    public int[] _itemPrice;
    public Transform[] _itemPos;
    public Text _talkText;
    public string[] _talkData;

    //Player Data
    Player _enterPlayer;

    public void Enter(Player player)
    {
        _enterPlayer = player;
        _UIGroup.anchoredPosition = Vector3.zero;
    }

    public void Exit()
    {
        _animator.SetTrigger("doHello");
        _UIGroup.anchoredPosition = Vector3.down * 1000;
    }

    public void Buy(int index)
    {
        int price = _itemPrice[index];

        if (price > _enterPlayer._coin)
        {
            //���� ���ڶ� 
            StopCoroutine(Talk());
            StartCoroutine(Talk());
            return;
        }
        //������ ����
        _enterPlayer._coin -= price;
        Vector3 ranVec = Vector3.right * Random.Range(-3, 3)
                        + Vector3.forward * Random.Range(-3, 3);
        Instantiate(_itemObject[index], _itemPos[index].position + ranVec, _itemPos[index].rotation);
    }

    IEnumerator Talk()
    {
        _talkText.text = _talkData[1];
        yield return new WaitForSeconds(2f);
        _talkText.text = _talkData[0];
    }
}
