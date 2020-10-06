using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class IftttMakerManager : MonoBehaviour
{
    private static string ApiKey = SecretsManager.IftttMakerApiKey;
    public static IEnumerator Request(string eventName)
    {
        var url = Url(eventName);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.isNetworkError) Debug.Log(webRequest.error);
            else Debug.Log(webRequest.downloadHandler.text);
        }
    }

    private static string Url(string eventName) => $"https://maker.ifttt.com/trigger/{eventName}/with/key/{ApiKey}";
}
