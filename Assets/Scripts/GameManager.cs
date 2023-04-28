using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject PlayerPrefab;

    void Start()
    {
        // float randomValueX2 = Random.Range(50f,66f);
        // float randomValueY2 = Random.Range(0f,16f);

        Instantiate(PlayerPrefab, new Vector3(8f, 1f, 8f), Quaternion.identity);
    }
}
