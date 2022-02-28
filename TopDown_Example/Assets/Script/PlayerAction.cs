using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAction : MonoBehaviour
{
    float _h;
    float _v;
    bool _isHorizonMove;

    public float _moveSpeed;
    public GameManager _gameManager;

    Rigidbody2D _rigid;
    Animator _anim;
    Vector3 _dirVec;
    GameObject _scanObject;

    //Mobile Key Var
    int _upValue;
    int _downValue;
    int _leftValue;
    int _rightValue;
    bool _upKeyDown;
    bool _downKeyDown;
    bool _leftKeyDown;
    bool _rightKeyDown;
    bool _upKeyUp;
    bool _downKeyUp;
    bool _leftKeyUp;
    bool _rightKeyUp;

    void Awake()
    {
        _rigid = GetComponent<Rigidbody2D>();
        _anim = GetComponent<Animator>();
    }

    void Update()
    {
        //Move Value
        //PC + Mobile
        _h = _gameManager._isAction ? 0 : Input.GetAxisRaw("Horizontal") + _leftValue + _rightValue;
        _v = _gameManager._isAction ? 0 : Input.GetAxisRaw("Vertical") + _upValue + _downValue;


        //Check Button Down & Up
        //PC + Mobile
        bool hDown = _gameManager._isAction ? false : Input.GetButtonDown("Horizontal") || _leftKeyDown || _rightKeyDown;
        bool vDown = _gameManager._isAction ? false : Input.GetButtonDown("Vertical") || _upKeyDown || _downKeyDown;
        bool hUp = _gameManager._isAction ? false : Input.GetButtonUp("Horizontal") || _leftKeyUp || _rightKeyUp;
        bool vUp = _gameManager._isAction ? false : Input.GetButtonUp("Vertical") || _upKeyUp || _downKeyUp;

        //Check Horizontal Move
        if (hDown)
        {
            _isHorizonMove = true;
        }
        else if (vDown)
        {
            _isHorizonMove = false;
        }
        else if (hUp || vUp)
        {
            _isHorizonMove = _h != 0;
        }

        //Animation
        if (_anim.GetInteger("hAxisRaw") != _h)
        {
            _anim.SetBool("isChange", true);
            _anim.SetInteger("hAxisRaw", (int)_h);
        }
        else if (_anim.GetInteger("vAxisRaw") != _v)
        {
            _anim.SetBool("isChange", true);
            _anim.SetInteger("vAxisRaw", (int)_v);
        }
        else
        {
            _anim.SetBool("isChange", false);
        }

        // Direction
        if (hDown && _h == -1)
        {
            //left
            _dirVec = Vector3.left;
        }
        else if (hDown && _h == 1)
        {
            //right
            _dirVec = Vector3.right;
        }
        else if (vDown && _v == -1)
        {
            //down
            _dirVec = Vector3.down;
        }
        else if (vDown && _v == 1)
        {
            //up
            _dirVec = Vector3.up;
        }

        //Scan Object
        if (Input.GetButtonDown("Jump") && _scanObject != null)
        {
            _gameManager.Action(_scanObject);
        }

        //Mobile Var Init
        _upKeyDown = false;
        _downKeyDown = false;
        _leftKeyDown = false;
        _rightKeyDown = false;
        _upKeyUp = false;
        _downKeyUp = false;
        _leftKeyUp = false;
        _rightKeyUp = false;
    }

    void FixedUpdate()
    {
        // Character Move
        Vector2 moveVec = _isHorizonMove ? new Vector2(_h, 0) : new Vector2(0, _v);
        _rigid.velocity = moveVec * _moveSpeed;

        // Ray
        //Scan Object
        Debug.DrawRay(_rigid.position, _dirVec * 0.7f, new Color(0, 1, 0));
        RaycastHit2D rayHit = Physics2D.Raycast(_rigid.position, _dirVec, 0.7f, LayerMask.GetMask("Object"));

        if(rayHit.collider != null)
        {
            _scanObject = rayHit.collider.gameObject;
        }
        else
        {
            _scanObject = null;
        }
    }

    public void ButtonDown(string type)
    {
        switch (type)
        {
            case "up":
                _upValue = 1;
                _upKeyDown = true;
                break;
            case "down":
                _downValue = -1;
                _downKeyDown = true;
                break;
            case "left":
                _leftValue = -1;
                _leftKeyDown = true;
                break;
            case "right":
                _rightValue = 1;
                _rightKeyDown = true;
                break;
        }
    }

    public void ButtonUp(string type)
    {
        switch (type)
        {
            case "up":
                _upValue = 0;
                _upKeyUp = true;
                break;
            case "down":
                _downValue = 0;
                _downKeyUp = true;
                break;
            case "left":
                _leftValue = 0;
                _leftKeyUp = true;
                break;
            case "right":
                _rightValue = 0;
                _rightKeyUp = true;
                break;
        }
    }
}
