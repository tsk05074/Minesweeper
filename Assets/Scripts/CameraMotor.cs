using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class CameraMotor : MonoBehaviour
{
   
    public float speed;

    void Update() {
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved){
            Vector2 TouchDeltaPosition = Input.GetTouch(0).deltaPosition;

            transform.Translate(-TouchDeltaPosition.x * speed, -TouchDeltaPosition.y * speed, 0);

            transform.position = new Vector3(
                Mathf.Clamp(transform.position.x, -100f,100f),
                Mathf.Clamp(transform.position.y, -100f,100f),
                Mathf.Clamp(transform.position.z, -100f,100f)
            );
        }    
    }
}
