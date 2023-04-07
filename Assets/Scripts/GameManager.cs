using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GameManager : MonoBehaviour
{
    public GameObject PlayerPrefab;

    void Awake()
    {
        PhotonNetwork.Instantiate(PlayerPrefab.name, new Vector3(16f, 1f, 16f), Quaternion.identity,0);
    }
}
