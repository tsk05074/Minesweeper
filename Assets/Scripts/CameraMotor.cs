using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class CameraMotor : MonoBehaviour{

//   public Transform target;
//   public float mouseSensitivity = 100f;

//   float xRotation;
//   void Start()
//   {
//   }

//   void Update(){
//     float mouseX = 0;
//     float mouseY = 0;

//     if (Touchscreen.current.touches.Count == 0)
//             return;

//         if (EventSystem.current.IsPointerOverGameObject(Touchscreen.current.touches[0].touchId.ReadValue()))
//         {
//             if (Touchscreen.current.touches.Count > 1 && Touchscreen.current.touches[1].isInProgress)
//             {
//                 if (EventSystem.current.IsPointerOverGameObject(Touchscreen.current.touches[1].touchId.ReadValue()))
//                     return;

//                 Vector2 touchDeltaPosition = Touchscreen.current.touches[1].delta.ReadValue();
//                 mouseX = touchDeltaPosition.x;
//                 mouseY = touchDeltaPosition.y;
//             }
//         }
//         else
//         {
//             if (Touchscreen.current.touches.Count > 0 && Touchscreen.current.touches[0].isInProgress)
//             {
//                 if (EventSystem.current.IsPointerOverGameObject(Touchscreen.current.touches[0].touchId.ReadValue()))
//                     return;

//                 Vector2 touchDeltaPosition = Touchscreen.current.touches[0].delta.ReadValue();
//                 mouseX = touchDeltaPosition.x;
//                 mouseY = touchDeltaPosition.y;
//             }

//         }

//         mouseX *= mouseSensitivity;
//         mouseY *= mouseSensitivity;

//         xRotation -= mouseY * Time.deltaTime;
//         xRotation = Mathf.Clamp(xRotation, -80, 80);

//         transform.localRotation = Quaternion.Euler(xRotation, 0, 0);

//         target.Rotate(Vector3.up * mouseX * Time.deltaTime);
//     }
  
    
}
