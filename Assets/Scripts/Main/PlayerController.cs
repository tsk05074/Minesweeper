using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
public class PlayerController : MonoBehaviourPun, IPunObservable {
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

                if(PhotonNetwork.IsMasterClient == true){
                    float x = Mathf.Clamp(player.transform.position.x,0.5f,16f);
                    float z = Mathf.Clamp(player.transform.position.z,0.5f,16f);

                    player.transform.position = new Vector3(x,transform.position.y + 0.1f,z);

                }
                else if(PhotonNetwork.IsMasterClient == false){
                    float x = Mathf.Clamp(player.transform.position.x,50f,66f);
                    float z = Mathf.Clamp(player.transform.position.z,0.5f,16f);

                    player.transform.position = new Vector3(x,transform.position.y + 0.1f,z);

                }
                


                animator.SetBool("IsWalking", true);
            }
        }
       
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if(stream.IsWriting){
            stream.SendNext(player.transform.position);
            stream.SendNext(player.transform.rotation);
        }
        else{
            player.transform.position = (Vector3)stream.ReceiveNext();
            player.transform.rotation = (Quaternion)stream.ReceiveNext();
        }
    }
}
