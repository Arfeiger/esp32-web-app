/*
* Sensors
*
* Unified sensors code.
*
* Created 27/2/2020
* by Íñigo Turrientes
*
*/
#include "Sensors.h"

dht11 dht11Sensor; //Instantiate a dht11 (ambient temperature and humidity sensor)

int Sensors::getSoilHumidity() {
	return analogRead(soilSensorPin) / 4;
}

int Sensors::getLightLevel() {
	return analogRead(lightSensorPin) / 4;
}

int Sensors::getTemp() {
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.temperature;
}

int Sensors::getHumidity(){
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.humidity;
}
