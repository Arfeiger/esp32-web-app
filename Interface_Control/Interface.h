/*
* Created 27/2/2020
* by Mechenane Khalef
* This file is for : geting the date from the server ,connecting to wifi and displaying HTML page
*/



#ifndef Interface_h
#define Interface_h
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>
#include <WebServer.h>
#include <time.h>
#include <ctime>
#include <Ethernet.h>

#include <ArduinoJson.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

class Config {

public:

    void baudRate();
    void iconDisplay();
    void wifiConnectSetUp();
    String printLocalTime();
    void displayWebPage(int light,int soil_humidity,int temp,int humidity);
    String sendData(String date ,int light ,int soil_humidity,int temp ,int humidity,String ip);
    void startClient();
    std::string to_thestring(int value);
    
};


#endif
