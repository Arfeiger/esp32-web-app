/*
* Sensors
*
* Unified sensors code.
*
* Created 27/2/2020
* by Íñigo Turrientes
*    Diego Peribanez
*/

#ifndef SENSORS_H_
#define SENSORS_H_

#include <Arduino.h>
#include <dht11.h>

class Sensors {
public:
	void setupSensors();
	int getSoil();
	int getLight();
	int getTemperature();
	int getHumidity();
	void getSensorsData(int data[]);
};

#endif
