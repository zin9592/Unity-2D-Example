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

    void Awake()
    {
        _rigid = GetComponent<Rigidbody2D>();
        _anim = GetComponent<Animator>();
    }

    void Update()
    {
        //Move Value
        _h = _gameManager._isAction ? 0 : Input.GetAxisRaw("Horizontal");
        _v = _gameManager._isAction ? 0 : Input.GetAxisRaw("Vertical");

        //Check Button Down & Up
        bool hDown = _gameManager._isAction ? false : Input.GetButtonDown("Horizontal");
        bool vDown = _gameManager._isAction ? false : Input.GetButtonDown("Vertical");
        bool hUp = _gameManager._isAction ? false : Input.GetButtonUp("Horizontal");
        bool vUp = _gameManager._isAction ? false : Input.GetButtonUp("Vertical");

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
}
