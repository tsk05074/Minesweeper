using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollwObj : MonoBehaviour
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
