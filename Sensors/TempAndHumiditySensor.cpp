/*
 * TempAndHumiditySensor.cpp
 *
 * This file manages the ambient temperature and humidity sensor.
 *
 * Created: 14/02/2020 17:10:53
 *  Author: ��igo Turrientes
 */ 

#include "TempAndHumiditySensor.h"

dht11 dht11Sensor;

int getTemp() {
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.temperature;
}

int getHumidity(){
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.humidity;
}
