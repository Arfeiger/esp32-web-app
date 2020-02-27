#ifndef Desplay_h
#define Display_h

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>
#include <WebServer.h>
#include <time.h>
#include <ctime>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

class Config {
public:
    void baudRate();
    void iconDisplay();
    void wifiConnectSetUp();
    String printLocalTime();
    void displayWebPage();
    String sendData(String date);
    //void connect_success();
    //void connect_notFound();
    void startClient();
};


#endif
