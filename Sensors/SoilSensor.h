/*
 * SoilSensor.h
 *
 * This file manages the soil humidity sensor.
 *
 * Values:
 *	Dry soil: 0 to 300
 *	Humid soil: 300 to 700
 *	On water: 700 to 950
 *
 * Created: 14/02/2020 16:02:20
 *  Author: ��igo Turrientes
 */ 


#ifndef SOILSENSOR_H_
#define SOILSENSOR_H_

#include <Arduino.h>

#define soilSensorPin 34

int getSoilHumidity();

#endif /* SOILSENSOR_H_ */
