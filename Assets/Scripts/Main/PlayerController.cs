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
        moveDir += Vector3.right * controller.Horizontal;

        if(Game.Instance.gameover){
            moveDir = Vector3.zero;
        }
        else if(Game.Instance.gameover == false){
             if(moveDir == Vector3.zero) {
             animator.SetBool("IsWalking", false);
            }
            else{

                moving_object.rotation = Quaternion.LookRotation(moveDir);
                moving_object.Translate(Vector3.forward * Time.fixedDeltaTime * speed);

                float x = Mathf.Clamp(moving_object.position.x,0.5f,31.5f);
                float z = Mathf.Clamp(moving_object.position.z,0.5f,31.5f);

                moving_object.position = new Vector3(x,transform.position.y + 0.1f,z);

                animator.SetBool("IsWalking", true);
            }
        }
       
    }
}
