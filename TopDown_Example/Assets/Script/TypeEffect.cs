using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TypeEffect : MonoBehaviour
{
    // ǥ���� ��ȭ ���ڿ��� ���� ������ ����
    string _targetMsg;
    // ���� ��� �ӵ��� ���� ���� ����(Char Per Second)
    public int _charPerSeconds;
    // ���� ����ӵ� ����
    float interval;
    // EndCursor
    public GameObject _endCursor;
    // UI �ؽ�Ʈ
    Text _msgText;
    // ����Ʈ ����
    int _index;
    // �����
    AudioSource _audioSource;
    // �ִϸ��̼� ���� �Ǵ��� ���� �÷��� ����
    public bool _isAnimation;

    private void Awake()
    {
        _msgText = GetComponent<Text>();
        _audioSource = GetComponent<AudioSource>();
    }


    public void SetMes(string msg)
    {
        if (_isAnimation)
        {
            _msgText.text = _targetMsg;
            CancelInvoke();
            EffectEnd();
        }
        else {
            _targetMsg = msg;
            EffectStart();
        }
    }

    void EffectStart()
    {
        _msgText.text = "";
        _index = 0;
        _endCursor.SetActive(false);
        // Text Char Effecting
        interval = 1.0f / _charPerSeconds;
        _isAnimation = true;

        Invoke("Effecting", interval);
        Debug.Log("Interval >>> " + interval);


    }
    void Effecting()
    {
        // All Message Effect End
        if (_msgText.text == _targetMsg)
        {
            EffectEnd();
            return;
        }
        // Sound
        if (_targetMsg[_index] != ' ' || _targetMsg[_index] != '.')
        {
            _audioSource.Play();
        }
        // Add One Character
        _msgText.text += _targetMsg[_index++];


        // Recursive
        Invoke("Effecting", interval);
    }

    void EffectEnd()
    {
        // EndCursor ���� �� ���� �ؽ�Ʈ �ѱ�� �ֵ���
        _endCursor.SetActive(true);
        _isAnimation = false;
    }
}
