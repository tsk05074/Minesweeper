using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollwObj : MonoBehaviour
{
    public Vector3 _offset;
    public Transform target;
    
    private void Update(){
        transform.position = target.position + _offset;
    }
}
