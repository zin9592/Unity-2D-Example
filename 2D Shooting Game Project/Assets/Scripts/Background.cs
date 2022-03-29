using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Background : MonoBehaviour
{
    public float _speed;
    public int _startIndex;
    public int _endIndex;
    public Transform[] _sprites;

    float _viewHeight;

    private void Awake()
    {
        // 실제 뷰의 높이 = Camera의 사이즈 * 2
        _viewHeight = Camera.main.orthographicSize * 2;
    }

    void Update()
    {
        Move();
        Scrolling();
    }

    void Move()
    {
        // 배경을 움직여서 비행기가 움직이는 것처럼 보이게 만든다.
        Vector3 curPos = transform.position;
        Vector3 nextPos = Vector3.down * _speed * Time.deltaTime;
        transform.position = curPos + nextPos;
    }

    void Scrolling()
    {
        if (_sprites[_endIndex].position.y < _viewHeight * (-1))
        {
            //Sprite ReUse
            Vector3 backSpritePos = _sprites[_startIndex].localPosition;
            Vector3 frontSpritePos = _sprites[_endIndex].localPosition;
            _sprites[_endIndex].transform.localPosition = backSpritePos + Vector3.up * _viewHeight;

            //Cursor Index Change
            int startIndexSave = _startIndex;
            _startIndex = _endIndex;
            _endIndex = (startIndexSave - 1) == -1 ? _sprites.Length - 1 : (startIndexSave - 1);
        }
    }
}
