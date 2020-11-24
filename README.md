# ERNI.SmartHomeAR

SmartHomeAR App allows you to control the following smart devices through AR.
- Smart TV with Ambient Light
- Lights
- Electric Fan
- Painting Ambient Light
- Air Conditioning

# Early Version

## Video 1
[![SmartHomeAR Early Version](https://img.youtube.com/vi/eG43c0iB2rI/0.jpg)](https://www.youtube.com/watch?v=eG43c0iB2rI)

# First Version

## Promotional Video

### Detailed Video

[![SmartHomeAR v0.2.4](https://img.youtube.com/vi/dzsEWN0Nmrk/0.jpg)](https://www.youtube.com/watch?v=dzsEWN0Nmrk)

### Different Perspective
What I see vs how others see me

[![SmartHomeAR v0.3 (What I see vs How others see me)](https://img.youtube.com/vi/eG9ZCQ4tW1o/0.jpg)](https://www.youtube.com/watch?v=eG9ZCQ4tW1o)

# TechStack

- Unity 3D 2019
- Mixed Reality Toolkit 2.4
- IFTTT
- IoT Platforms
  - Smart Life
  - Magic Hue
  - eWeLink

# Limitations
Currently the implementation requires internet connections because most smart home devices of today doesn't provide any API for local integration.

# Setting Up Your Own Local Development

## Pre-requisite (Minimum)
### Smart Devices
- *SmartIR* similar to this [Tuya Smart-IR Mini](https://www.lazada.com.ph/products/joylab-wifi-smart-ir-mini-universal-remote-control-for-tv-aircon-and-other-ir-devices-works-with-smart-lifetuya-alexa-and-google-home-i874600377-s2775746212.html?spm=a2o4l.searchlist.list.3.6746245aIqGTuX&search=1).
   - must be IFTTT Compatible
- *LED Strip with Wifi Controller* similar to this product [MagicHue Smart LED Strip](https://www.lazada.com.ph/products/wifi-smart-phone-app-control-led-stripdc12v-5050-rgb-5m-10m-300leds-working-android-ios-systemiftttgoogle-assistant-with-ir-remote-i316432258-s971020831.html?spm=a2o4l.searchlist.bestshown_1.1.7b7455efF8vgII&search=1) for the TV Ambient Light.
   - must be IFTTT Compatible
### Home Appliance
- A flat screen TV with 1~3 HDMI
- Aircon with the following controls (Mine is a DaiKin)
   - Fan Only
   - Cool
   - Temperature (+/-)
   - Quite Mode
### Licenses
- IFTTT Pro ($3.99/monthly)

##  Preparation
Before anything else, if you were able to buy the SmartIR and Magic Hue LED Strip as mentioned above, you will end up having the **Smart Life (Tuya)** and **Magic Hue** IoT Platforms installed in your mobile phones. Make sure that the SmartIR device is added to your [Smart Life](https://play.google.com/store/apps/details?id=com.tuya.smartlife&hl=en&gl=US) / [Tuya](https://play.google.com/store/apps/details?id=com.tuya.smart&hl=en&gl=US) App and that the LED Strip lights is added to your [Magic Hue](https://play.google.com/store/apps/details?id=com.magichue.wifi) a.k.a. [Magic Home](https://play.google.com/store/apps/details?id=com.zengge.wifi) App.

Please note the following:
- You can use either *Smart Life* or *Tuya*, most likely when a device is Smart Life compatible, it is Tuya compatible as well, what I use is the Smart Life app.
- *Magic Hue* and *Magic Home Pro* are the same (their backend are the same, what ever device you add in Magic Hue with will available as well in Magic Home), the only difference is that *Magic Home* service is not available in IFTTT. What I use is the Magic Hue to prevent confusion.

When you properly added the SmartIR device in your Smart Life / Tuya app, make your that you add the Aircon and TV remote to the Smart IR's sub devices.

## Creating your IFTTT API
To create an API that is compatible with web call. use the *Webhooks* service.

### Creating our first API (tvled_lights_on)
- Open IFTTT (either website / mobile app)
- Create new *Applet*
- Under **IF THIS** search and select **webhooks**.
- In the list of available triggers select **Receive a web request**.
- Under **Even Name** field put *tvled_lights_on* then click **Create Trigger**.
- Under **THEN THAT** search and select **Magic Hue**. if a login is requested, login your Magic Hue account.
- Under list of available actions select **Turn lights on**.
- This will then display your available Magic Hue devices, select the correct device and click **Create Action**.
- In the main page of Applet creation click **Continue**.
- To make it easy to remember the applet change the Applet Title to **tvled_lights_on_api**.

### Testing you first API
- Do note that IFTTT Webhook APIs required an API Key, to know your API key navigate to [Webhook Settings](https://ifttt.com/maker_webhooks/settings) **!! Remember this Key as we will be needing this in the future**.
- To test your new API, navigate to the following url: `https://maker.ifttt.com/trigger/tvled_lights_on/with/key/<your_webhook_api_key>`. If the LED Strip is off, it will turn on after few seconds.

### More APIs

Do the above procedure to the following APIs as well.
- LED Lights
  - tvled_lights_off
  - tvled_lights_red
  - tvled_lights_green
  - tvled_lights_white
  - tvled_lights_blue
- TV
  - tv_volume_up
  - tv_volume_down
  - tv_power
  - tv_mute
  - tv_source_tv - direct to DTV source
  - tv_source_hdmi1 - direct to hdmi1 (mine is Chromecast)
  - tv_source_hdmi2 - direct to hdmi2 (mine is PC)
  - tv_source_hdmi3 - direct to hdmi3 (mine is PS4)
- Air Conditioning
  - aircon_temp_up
  - aircon_temp_down
  - aircon_quite - direct to *Quite Mode*
  - aircon_fan - direct to *Fan Only*
  - aircon_cool - direct to *Cool* (normal mode)
  - aircon_default - trigger multiple actions (**THEN THAT**)
    - Turn on the Aircon
    - *Cool*
    - Set temperature to 23 deg.
## Clone the source code
One all your api the ready time to clone the source code of this Git Repository. Once done, you can now open the unity scene **MainScene.unity**.

## Adding the SecretManager
Before building the Unity you need to first create the following file `SecretsManager.cs`under `ERNI.SmartHomeAR/Assets/Scripts/` folder.
```csharp
public class SecretsManager
{
    public static string IftttMakerApiKey = "<your_webhook_api_key>";
}
```

## Finally Build

Finally, build the Unity project as a normal HoloLens Project. For any questions you may contact pavi@erni.ph or vjppaz@gmail.com

# References
- MRTK Basics https://channel9.msdn.com/Shows/Docs-Mixed-Reality/Intro-to-MRTK-Unity
- MRTK Documetation https://github.com/microsoft/MixedRealityToolkit-Unity#documentation
- MRTK Required Software https://github.com/microsoft/MixedRealityToolkit-Unity#required-software
- MRTK Demo Apps https://github.com/microsoft/MixedRealityToolkit-Unity#example-scenes
- Unity Udemy Course (Suggest to take) https://www.udemy.com/course/unitycourse2/
- Mixed Reality Toolkit Unity Packages https://github.com/microsoft/MixedRealityToolkit-Unity/releases/tag/v2.4.0
- Unity Installer (Unity Hub) https://unity3d.com/get-unity/download
- IFTTT https://ifttt.com/home
- IFTTT Webhook Applet https://ifttt.com/maker_webhooks
- Tuya/SmartLife https://www.tuya.com/
- eWeLink - https://www.ewelink.cc/en/
