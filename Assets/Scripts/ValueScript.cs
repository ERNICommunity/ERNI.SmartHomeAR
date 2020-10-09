using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ValueScript : MonoBehaviour
{
    [SerializeField]
    private int minValue;

    [SerializeField]
    private int maxValue;

    private ButtonConfigHelper ButtonConfigHelper => this.GetComponent<ButtonConfigHelper>();
    private int Value => int.Parse(ButtonConfigHelper.MainLabelText);
    public void Increase()
    {
        if (Value >= maxValue)
        {
            ButtonConfigHelper.MainLabelText = $"{maxValue}";
        }
        else if (Value < minValue)
        {
            ButtonConfigHelper.MainLabelText = $"{minValue}";
        }
        else
        {
            ButtonConfigHelper.MainLabelText = $"{Value + 1}";
        }
    }

    public void Decrease()
    {
        if (Value <= minValue)
        {
            ButtonConfigHelper.MainLabelText = $"{minValue}";
        }
        else if (Value > maxValue)
        {
            ButtonConfigHelper.MainLabelText = $"{maxValue}";
        }
        else
        {
            ButtonConfigHelper.MainLabelText = $"{Value - 1}";
        }

    }
}
