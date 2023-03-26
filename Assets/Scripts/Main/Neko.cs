using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Neko : MonoBehaviour
{
    public ParticleSystem ps;

    public void SpawnVFX(){
    }


    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag=="Tile" && Game.Instance.isclickButton == true){

            Game.Instance.Flag(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
            Game.Instance.isclickButton = false;
            // ps.transform.localPosition = new Vector3(other.transform.position.x,
            // other.transform.position.y,other.transform.position.z);
           
            ps.gameObject.SetActive(true);
            
           
        }
        else if(other.gameObject.tag == "Tile" && Game.Instance.isFlagButton == true){
            Game.Instance.Reveal(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
            // ps.transform.localPosition = new Vector3(other.transform.position.x,
            // other.transform.position.y,other.transform.position.z);
             
                ps.gameObject.SetActive(true);
            
            Game.Instance.isFlagButton = false;
        }
    }
}
