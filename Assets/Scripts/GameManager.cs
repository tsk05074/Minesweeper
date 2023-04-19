using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GameManager : MonoBehaviour
{
    public GameObject PlayerPrefab;

    void Start()
    {
        float randomValueX = Random.Range(0f,16f);
        float randomValueY = Random.Range(0f,16f);

        if(PhotonNetwork.IsMasterClient){
            PhotonNetwork.Instantiate(PlayerPrefab.name, new Vector3(randomValueX, 1f, randomValueY), Quaternion.identity,0);
        }
        else{
            PhotonNetwork.Instantiate(PlayerPrefab.name, new Vector3(randomValueX, 1f, randomValueY), Quaternion.identity,0);
        }
    }
}
