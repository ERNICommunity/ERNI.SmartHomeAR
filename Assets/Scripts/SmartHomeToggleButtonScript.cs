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
    public bool isOn;

    [SerializeField]
    private GameObject[] ChildrenSmartHomeToggleParents;

    public void ToggleEvent()
    {
        StartCoroutine(IftttMakerManager.Request(isOn ? offEventName : onEventName));
        isOn = !isOn;

        foreach (var item in ChildrenSmartHomeToggleParents)
        {
            var script = item.GetComponent<SmartHomeToggleButtonScript>();
            if (script != null) {
                script.isOn = isOn;
            }
        }
    }
}
