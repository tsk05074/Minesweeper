using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Neko : MonoBehaviour
{
    public ParticleSystem ps;

    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag=="Tile" && Game.Instance.isclickButton == true){

            Game.Instance.Flag(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
            Game.Instance.isclickButton = false;
            SoundManager.Instance.PlaySFX("flag");
        }
        else if(other.gameObject.tag == "Tile" && Game.Instance.isFlagButton == true){
            Game.Instance.Reveal(new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
             
            StartCoroutine(ParticleClick());
            
            Game.Instance.isFlagButton = false;
            SoundManager.Instance.PlaySFX("click");
        }
    }

    IEnumerator ParticleClick(){
        ps.gameObject.SetActive(true);

        yield return new WaitForSeconds(1f);

        ps.gameObject.SetActive(false);
    }
}
