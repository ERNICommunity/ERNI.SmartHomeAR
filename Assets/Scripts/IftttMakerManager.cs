using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IftttMakerManager : MonoBehaviour
{
    private static string ApiKey = SecretsManager.IftttMakerApiKey;
    public static IEnumerator Request(string eventName)
    {
        var url = Url(eventName);
        Debug.Log(url);

        using (var www = new WWW(url))
        {
            yield return www;
        }
    }

    private static string Url(string eventName) => $"https://maker.ifttt.com/trigger/{eventName}/with/key/{ApiKey}";
}
