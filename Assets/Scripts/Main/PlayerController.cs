using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
public class PlayerController : MonoBehaviour {
    private GameObject player;
    private Joystick controller;
    private Animator animator;

    public PhotonView playerView;

    public float speed = 20f;

    private void Start() {
        player = GameObject.Find("Player(Clone)");
        playerView = player.GetComponent<PhotonView>();
        controller = this.GetComponent<Joystick>();
        animator = player.GetComponent<Animator>();
    }

    private void FixedUpdate()
    {
        if(!playerView.IsMine){
            return;
        }

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

                player.transform.rotation = Quaternion.LookRotation(moveDir);
                player.transform.Translate(Vector3.forward * Time.fixedDeltaTime * speed);

                float x = Mathf.Clamp(player.transform.position.x,0.5f,31.5f);
                float z = Mathf.Clamp(player.transform.position.z,0.5f,31.5f);

                player.transform.position = new Vector3(x,transform.position.y + 0.1f,z);

                animator.SetBool("IsWalking", true);
            }
        }
       
    }
}
