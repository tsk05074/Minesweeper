using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class MenuController : MonoBehaviourPunCallbacks
{
   [SerializeField] private string VersionName = "0.1";
   [SerializeField] private GameObject UsernameMenu;
   [SerializeField] private GameObject ConnectPanel;

    [SerializeField] private InputField UsernameInput;
    [SerializeField] private InputField CreateGameInput;
    [SerializeField] private InputField JoinGameInput;

    [SerializeField] private GameObject StartButton;

   private void Awake()
   {
    //접속에 필요한 정보 설정(게임 버전)
    PhotonNetwork.GameVersion = this.VersionName;
    //설정한 정보로 마스터 서버 접속 시도
     PhotonNetwork.ConnectUsingSettings();
   }

   private void Start(){
    UsernameMenu.SetActive(true);
   }

    // 마스터 서버 접속 성공시 자동 실행
   public override void OnConnectedToMaster(){
        PhotonNetwork.JoinLobby(TypedLobby.Default);
        Debug.Log("Connected");
   }

   public void ChangeUserNameInput(){
    if(UsernameInput.text.Length >= 3){
        StartButton.SetActive(true);
    }
    else{
        StartButton.SetActive(false);
    }
   }

   public void SetUserName(){
    UsernameMenu.SetActive(false);
    PhotonNetwork.NickName = UsernameInput.text;
   }
}
