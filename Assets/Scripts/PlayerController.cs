using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class PlayerController : MonoBehaviour {

    private Game game;
    public Transform moving_object;
    public float speed = 20f;


    private Joystick controller;
    private void Start() {
        controller = this.GetComponent<Joystick>();
        game = FindObjectOfType<Game>();
        moving_object.transform.position = new Vector3(game.width/2f, game.height / 2f, 10);
    }

    private void FixedUpdate()
    {
        Vector3 moveDir = Vector3.forward * controller.Vertical;
        moveDir += Vector3.right * controller.Horizontal;

        if(moveDir == Vector3.zero) return;

        moving_object.rotation = Quaternion.LookRotation(moveDir);
        moving_object.Translate(Vector3.forward * Time.fixedDeltaTime * speed);
    }
}
