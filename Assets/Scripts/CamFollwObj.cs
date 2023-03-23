using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollwObj : MonoBehaviour
{
    public Transform follow_obj;

    private void FixedUPdate(){
        Vector3 pos = this.transform.position;
        this.transform.position = Vector3.Lerp(pos, follow_obj.position, 0.4f);
    }
}
