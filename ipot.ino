#include <WiFi.h>
#include "LedsAndButtons/LedsAndButtons.h"
#include "Sensors/Sensors.h"
#include "WiFi/IpotServer.h"
#include "Wifi/IpotWebServer.h"

// Variable to store current data
int data[4];
// Object for server
IpotServer ipotServer;
// Object for sensors
Sensors sensors;
// Object for web server
IpotWebServer ipotWebServer;
// Object for leds and buttons
LedsAndButtons ledsAndButtons;
// Object for ESP32 server (connection)
WiFiServer server(80);
// String for the header of the client (interaction)
String header;

//int mode = 0;
//int* data24h[24][4];
//int indexData24h = 0;
//int hourCounter = 0;
//unsigned long startTime = millis();

void setup() {
  Serial.begin(115200);
  // Set up the connection and pinout
  sensors.setupSensors();
  ledsAndButtons.setupLedsAndButtons();
  ipotServer.setupServer(server);
}

void loop() {
  // We get the number of clients connected
  WiFiClient client = server.available();

  // If there are clients, we collect their responses
  if (client) {
    String currentLine = "";

    while (client.connected()) {

      if (client.available()) {

        char c = client.read();
        header += c;

        if (c == '\n') {
          if (currentLine.length() == 0) {
            // If the client sends /update, the data gets updated
            if (header.indexOf("GET /update") >= 0) {
              sensors.getSensorsData(data);
            }
            // Sends UI to the client
            ipotWebServer.showUI(client, data);
          }
          else {
            currentLine = "";
          }
        }
        else if (c != '\r') {
          currentLine += c;
        }
      }
    }

    header = "";
    client.stop();
  }
}
