using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class PlayerController : MonoBehaviour {
    public Transform moving_object;
    public float speed = 20f;
    private Joystick controller;

    private Animator animator;
    private void Start() {
        controller = this.GetComponent<Joystick>();
        animator = moving_object.GetComponent<Animator>();
    }

    private void FixedUpdate()
    {
        
        Vector3 moveDir = Vector3.forward * controller.Vertical;
        moveDir += Vector3.right * controller.Horizontal;{

        }

        if(moveDir == Vector3.zero) {
            animator.SetBool("IsWalking", false);
            //return;
        }
        else{
            moving_object.rotation = Quaternion.LookRotation(moveDir);
            moving_object.Translate(Vector3.forward * Time.fixedDeltaTime * speed);
            animator.SetBool("IsWalking", true);

        }
    }
}
