using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GameManager : MonoBehaviour
{
    public GameObject PlayerPrefab;
    //public GameObject Grid;

    void Awake(){
        //PhotonNetwork.Instantiate(Grid.name, transform.position, Quaternion.identity, 0);
    }

    void Start()
    {
        float randomValueX1 = Random.Range(0f,16f);
        float randomValueY1 = Random.Range(0f,16f);

        float randomValueX2 = Random.Range(20f,35f);
        float randomValueY2 = Random.Range(0f, 16f);

        if(PhotonNetwork.IsMasterClient == true){
            Debug.Log("gi");
            PhotonNetwork.Instantiate(PlayerPrefab.name, new Vector3(randomValueX1, 1f, randomValueY1), Quaternion.identity,0);
        }
        else if(PhotonNetwork.IsMasterClient == false){
            Debug.Log("마스터 클라이언트 아님");
            PhotonNetwork.Instantiate(PlayerPrefab.name, new Vector3(randomValueX2, 1f, randomValueY2), Quaternion.identity,0);
        }
    }
}
