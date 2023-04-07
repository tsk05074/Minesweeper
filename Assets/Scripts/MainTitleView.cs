using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using DG.Tweening;
using Photon.Pun;
public class MainTitleView : MonoBehaviour
{
    public GameObject Option;
    public Image fadeImage;

   private void Start()
    {
        SoundManager.Instance.PlayBGM("TitleBGM");
    }

    public void StartGame()
    {
        SoundManager.Instance.PlaySFX("click");
        fadeImage.DOFade(1, 0.5f).From(0)
            .OnStart(() => { fadeImage.gameObject.SetActive(true); })
            .OnComplete(() => { SceneManager.LoadScene("Lobby"); });
    }

    public void ResetGame(){
        fadeImage.DOFade(1, 0.5f).From(0)
            .OnStart(() => { fadeImage.gameObject.SetActive(true); PhotonNetwork.LeaveRoom(); })
            .OnComplete(() => { SceneManager.LoadScene("Title"); });
    }

    public void OptionOn()
    {
        SoundManager.Instance.PlaySFX("ClickSfx");
        Option.SetActive(true);
    }

    public void OptionOff()
    {
        SoundManager.Instance.PlaySFX("ClickSfx");
        Option.SetActive(false);
    }
}
