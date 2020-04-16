

//Libary for displaying plant icone,display time returned from a server
#include <Interface.h>
#include <Sensors.h>

Config interface;
Sensors sensor;

void setup() {

  int light = sensor.getLightLevel();
  int soil_humidity = sensor.getSoilHumidity();
  int temp = sensor.getTemp();
  int humidity = sensor.getHumidity();

  
  interface.baudRate();
  interface.iconDisplay();
  interface.wifiConnectSetUp();
  interface.printLocalTime();
  //display the html website in a browser
  interface.displayWebPage(light, soil_humidity, temp, humidity);
}

void loop() {
  interface.startClient();

}
