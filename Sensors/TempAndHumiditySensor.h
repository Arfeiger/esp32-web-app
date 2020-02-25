 /*
 * TempAndHumiditySensor.h
 *
 * This file manages the ambient temperature and humidity sensor.
 *
 * Created: 14/02/2020 17:11:03
 *  Author: ��igo Turrientes
 */ 


#ifndef TEMPANDHUMIDITYSENSOR_H_
#define TEMPANDHUMIDITYSENSOR_H_

#include <Arduino.h>
#include <dht11.h>

#define dht11SensorPin 4

int getTemp();
int getHumidity();

#endif /* TEMPANDHUMIDITYSENSOR_H_ */
