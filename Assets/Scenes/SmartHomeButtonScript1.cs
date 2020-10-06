using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmartHomeButtonScript : MonoBehaviour
{
    public void TriggerEvent(string eventName)
    {
        Debug.Log(eventName + " called.");
        StartCoroutine(IftttMakerManager.Request(eventName));
    }
}
