using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class Neko : MonoBehaviour
{
    //public ParticleSystem ps;
    public Text PlayerNameText;
    private PhotonView playerView;

    void Start(){
        playerView = GameObject.Find("Player(Clone)").GetComponent<PhotonView>();

        PlayerNameText.text = PhotonNetwork.NickName;
    }


    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag=="Tile" && Game.Instance.isclickButton == true){

            Game.Instance.PV.RPC("Flag", RpcTarget.AllBuffered, new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));

            Game.Instance.isclickButton = false;
            SoundManager.Instance.PlaySFX("flag");
        }
        else if(other.gameObject.tag == "Tile" && Game.Instance.isFlagButton == true){

            Game.Instance.PV.RPC("Reveal", RpcTarget.AllBuffered, new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
            
            Game.Instance.isFlagButton = false;
            SoundManager.Instance.PlaySFX("click");
        }
    }
}
