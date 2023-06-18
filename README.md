# How to Host a Web Server on an ESP8266 Microcontroller

A brief guide on how to host a web server on your ESP8266
![ESP8266](https://raw.githubusercontent.com/TheofanisB/ESP8266-Web-Server/main/PXL_20230618_153849412.jpg)


## Requirements
In order to host the server on your ESP866 you need to have the following:
- Arduino IDE installed
- ESP8266 board support package installed
- An ESP8266 board
- A USB-to-serial adapter or a development board with built-in USB support to connect the ESP8266 to your computer.

## Hosting The Server 
- Paste my Code included in the repo into your Arduino IDE

- Replace the "MyWiFiSSID" and "MyWiFiPassword" placeholders in the code with your ACTUAL network credentials. 

    DISCLAIMER: The ESP8266 board can only connect to 2.4GHz WiFi networks so make sure your WiFi has a 2.4GHz band!

- Upload the code: Select the appropriate board and port in the Arduino IDE, then upload the code to your ESP8266.

- Once the code is uploaded successfully, open a web browser on a device connected to the same network and enter the IP address of the ESP8266 (which can be found in the Arduino IDE Serial Monitor). You should see the "Hello from ESP8266!" message.


You can further customize the server's functionality by adding additional routes and handling different types of requests.

🚀🚀🚀That's all I guess!?🚀🚀🚀
