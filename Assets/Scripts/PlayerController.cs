using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public VariableJoystick joy;
    public float speed;

    Rigidbody rigidbody;
    Vector3 moveVec;

    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
        float x = joy.Horizontal;
        float z = joy.Vertical;

        moveVec = new Vector3(x,0,z) * speed * Time.deltaTime;
        rigidbody.MovePosition(rigidbody.position + moveVec);

        if(moveVec.sqrMagnitude == 0){
            return;
        }

        Quaternion dirQuat = Quaternion.LookRotation(moveVec);
        Quaternion moveQuat = Quaternion.Slerp(rigidbody.rotation, dirQuat, 0.3f);
        rigidbody.MoveRotation(moveQuat);
    }
}
