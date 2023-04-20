using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class CamFollwObj : MonoBehaviourPunCallbacks
{
    public Vector3 _offset;
    public GameObject target;

    void Start(){
        target = GameObject.Find("Player(Clone)");
    }
    
    private void Update(){
        transform.position = target.transform.position + _offset;
    }
}
