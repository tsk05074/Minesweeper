using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class SoundManager : MonoBehaviour
{
   public const string BGM_PATH = "Sound/Music/";
    public const string SFX_PATH = "Sound/SFX/";

    private AudioSource bgmSource;
    private AudioSource sfxSource;

    private Dictionary<string, AudioClip> bgmClips;
    private Dictionary<string, AudioClip> sfxClips;

    private float masterVolume = 1;
    private float bgmVolume;
    private float sfxVolume;

    public float MasterVolume
    {
        get => masterVolume;
    }
    public float BGMVolume
    {
        get => bgmVolume;
    }
    public float SFXVolume
    {
        get => sfxSource.volume;
    }

    private static SoundManager instance;
    public static SoundManager Instance
    {
        get
        {
            if (instance == null)
            {
                var gameObject = new GameObject("SoundManager");
                DontDestroyOnLoad(gameObject);

                instance = gameObject.AddComponent<SoundManager>();
                instance.bgmSource = gameObject.AddComponent<AudioSource>();
                instance.sfxSource = gameObject.AddComponent<AudioSource>();
                instance.bgmVolume
                    = instance.bgmSource.volume
                        = instance.sfxVolume
                            = instance.sfxSource.volume
                                = 0.5f;

                instance.bgmClips = Resources.LoadAll<AudioClip>(BGM_PATH).ToDictionary(p => p.name);
#if UNITY_EDITOR
                foreach (var item in instance.bgmClips)
                {
                    Debug.Log($"<color=#B3F959>BGM Load</color> {item.Key}");
                }
#endif
                instance.sfxClips = Resources.LoadAll<AudioClip>(SFX_PATH).ToDictionary(p => p.name);
#if UNITY_EDITOR
                foreach (var item in instance.sfxClips)
                {
                    Debug.Log($"<color=#599AF9>SFX Load</color> {item.Key}");
                }
#endif
            }
            return instance;
        }
    }
    public void PlayBGM(string v)
    {
        bgmSource.clip = bgmClips[v];
        bgmSource.loop = true;
        bgmSource.Play();
    }

    public void StopBGM()
    {
        bgmSource.Stop();
    }

    public void PlaySFX(string key)
    {
        sfxSource.PlayOneShot(sfxClips[key]);
    }

    public void SetBGMVolume(float value)
    {
        bgmVolume = value;
        bgmSource.volume = masterVolume * bgmVolume;
    }

    public void SetSFXVolume(float value)
    {
        sfxVolume = value;
        sfxSource.volume = masterVolume * sfxVolume;
    }

    public void SetMasterVolume(float value)
    {
        masterVolume = value;
        bgmSource.volume = masterVolume * bgmVolume;
        sfxSource.volume = masterVolume * sfxVolume;
    }

    public void MuteVolume(string type)
    {
        if (type == "BGM")
            bgmSource.mute = !bgmSource.mute;
        else
            sfxSource.mute = !sfxSource.mute;
    }
}

