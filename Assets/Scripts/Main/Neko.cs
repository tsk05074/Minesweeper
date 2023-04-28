using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Neko : MonoBehaviour
{
    void Start(){

    }


    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag=="Tile" && Game.Instance.isclickButton == true){

            Game.Instance.Flag(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));


            Debug.Log("flag");

            Game.Instance.isclickButton = false;
            SoundManager.Instance.PlaySFX("flag");
        }
        else if(other.gameObject.tag == "Tile" && Game.Instance.isFlagButton == true){

             Game.Instance.Reveal(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));

            
            Debug.Log("click");

            Game.Instance.isFlagButton = false;
            SoundManager.Instance.PlaySFX("click");
        }
    }
}
