using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmartHomeToggleButtonScript : MonoBehaviour
{
    [SerializeField]
    private string onEventName;

    [SerializeField]
    private string offEventName;

    [SerializeField]
    private bool isOn;

    public void ToggleEvent()
    {
        StartCoroutine(IftttMakerManager.Request(isOn ? offEventName : onEventName));
        isOn = !isOn;
    }
}
