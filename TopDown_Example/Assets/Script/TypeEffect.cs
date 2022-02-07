using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TypeEffect : MonoBehaviour
{
    // 표시할 대화 문자열을 따로 변수에 저장
    string _targetMsg;
    // 글자 재생 속도를 위한 변수 생성(Char Per Second)
    public int _charPerSeconds;
    // 글자 재생속도 조절
    float interval;
    // EndCursor
    public GameObject _endCursor;
    // UI 텍스트
    Text _msgText;
    // 이펙트 순서
    int _index;
    // 오디오
    AudioSource _audioSource;
    // 애니메이션 실행 판단을 위한 플래그 변수
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
        // EndCursor 생성 후 다음 텍스트 넘길수 있도록
        _endCursor.SetActive(true);
        _isAnimation = false;
    }
}
