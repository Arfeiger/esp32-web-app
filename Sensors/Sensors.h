/*
* Sensors
*
* Unified sensors code.
*
* Created 27/2/2020
* by Íñigo Turrientes
*
*/

#ifndef SENSORS_H_
#define SENSORS_H_

#include <Arduino.h>
#include <dht11.h>

#define soilSensorPin 15
#define lightSensorPin 13
#define dht11SensorPin 12

class Sensors {
public:
	int getSoilHumidity();
	int getLightLevel();
	int getTemp();
	int getHumidity();
};

#endif
