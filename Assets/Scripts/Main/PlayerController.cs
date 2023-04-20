using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
public class PlayerController : MonoBehaviour {
    //private GameObject player;
    public Joystick controller;
    private Animator animator;
    private Rigidbody rigidbody;

    Vector3 moveDir;
    public PhotonView playerView;
    public float speed = 1f;

    private void Awake(){
        controller = GameObject.Find("Variable Joystick_move").GetComponent<VariableJoystick>();

    }

    private void Start() {
        rigidbody = GetComponent<Rigidbody>();
        playerView = GetComponent<PhotonView>();
        //controller = this.GetComponent<Joystick>();
        animator = GetComponent<Animator>();
    }

    void Update(){
        //rigidbody.angularVelocity = Vector3.zero;
    }

    private void FixedUpdate()
    {
        if(!playerView.IsMine){
            return;
        }

        moveDir.x = controller.Horizontal * speed * Time.deltaTime;
        moveDir.z = controller.Vertical * speed * Time.deltaTime;
        // Vector3 moveDir = Vector3.forward * controller.Vertical;
        // moveDir += Vector3.right * controller.Horizontal;
        //rigidbody.velocity = new Vector3(controller.Horizontal * speed, rigidbody.velocity.y, controller.Vertical * speed);


        if(Game.Instance.gameover){
            moveDir = Vector3.zero;
        }
        else if(Game.Instance.gameover == false){
             if(moveDir == Vector3.zero) {
             animator.SetBool("IsWalking", false);
            }
            else{

                transform.rotation = Quaternion.LookRotation(moveDir);
                transform.Translate(Vector3.forward * Time.fixedDeltaTime * speed);

                if(PhotonNetwork.IsMasterClient){
                    float x1 = Mathf.Clamp(transform.position.x, 0.5f, 16f);
                    float z1 = Mathf.Clamp(transform.position.z, 0.5f, 16f);

                    transform.position = new Vector3(x1, transform.position.y + 0.1f, z1);

                }
                else if(PhotonNetwork.IsMasterClient == false){
                    float x2 = Mathf.Clamp(transform.position.x, 20.5f,36.5f);
                    float z2 = Mathf.Clamp(transform.position.z, 0.5f, 16f);

                    transform.position = new Vector3(x2, transform.position.y + 0.1f, z2);

                }
                animator.SetBool("IsWalking", true);
            }
        }
       
    }
    void OnCollisionEnter(){
        rigidbody.velocity = Vector3.zero;
    }
    void OnCollisionStay(){
        rigidbody.velocity = Vector3.zero;
    }
}
