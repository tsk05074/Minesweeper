using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCam : MonoBehaviour
{
    public VariableJoystick lookJoy;
    public float xRotaton = 0f;
    public float yRotaton = 0f;
    public float sensitivity;

    private void FixedUpdate() {
        float currentX = lookJoy.Horizontal *sensitivity* Time.deltaTime;
        float currentY = lookJoy.Vertical *sensitivity* Time.deltaTime;

        xRotaton -= currentY;
        yRotaton -= currentX;
        xRotaton = Mathf.Clamp(xRotaton, -90f, 90f);
        yRotaton = Mathf.Clamp(-90f, yRotaton, 90f);
        transform.localRotation = Quaternion.Euler(xRotaton,yRotaton*-1f,0f);
   }
}
