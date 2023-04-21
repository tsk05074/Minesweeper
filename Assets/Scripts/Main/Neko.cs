using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class Neko : MonoBehaviourPun
{
    //public ParticleSystem ps;
    public Text MayNameText;
    private PhotonView playerView;
    

    void Start(){
        playerView = GameObject.Find("Player(Clone)").GetComponent<PhotonView>();

        MayNameText.text = PhotonNetwork.NickName;
    }


    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag=="Tile" && Game.Instance.isclickButton == true && photonView.IsMine){
            if(!playerView.IsMine) return;

            // Game.Instance.Flag(new Vector3(other.transform.position.x,
            // other.transform.position.y,other.transform.position.z));
            Game.Instance.PV.RPC("Flag", RpcTarget.AllBuffered, new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));

            Debug.Log("flag");

            Game.Instance.isclickButton = false;
            SoundManager.Instance.PlaySFX("flag");
        }
        else if(other.gameObject.tag == "Tile" && Game.Instance.isFlagButton == true && photonView.IsMine){
            if(!playerView.IsMine) return;

            //  Game.Instance.Reveal(new Vector3(other.transform.position.x,
            // other.transform.position.y,other.transform.position.z));
            Game.Instance.PV.RPC("Reveal", RpcTarget.AllBuffered, new Vector3(other.transform.position.x,
            other.transform.position.y,other.transform.position.z));
            
            Debug.Log("click");

            Game.Instance.isFlagButton = false;
            SoundManager.Instance.PlaySFX("click");
        }
    }
}
