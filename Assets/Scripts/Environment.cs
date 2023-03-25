
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class Environment : MonoBehaviour
{
     [Header("Sounds")]
    [SerializeField] private Slider masterVolumeSlider;
    [SerializeField] private Slider bgmVolumeSlider;
    [SerializeField] private Slider sfxVolumeSlider;

    private void Start()
    {
        masterVolumeSlider.onValueChanged.AddListener(value => SoundManager.Instance.SetMasterVolume(value));
        bgmVolumeSlider.onValueChanged.AddListener(value => SoundManager.Instance.SetBGMVolume(value));
        sfxVolumeSlider.onValueChanged.AddListener(value => SoundManager.Instance.SetSFXVolume(value));

    }
}
