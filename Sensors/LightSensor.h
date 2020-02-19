/*
 * LightSensor.h
 *
 * This file manages the light sensor.
 *
 * Values:
 *  Very bright: > 9900
 *  Bright 700 to 990
 *  Moody: 400 to 700
 *  Dark: 100 to 400
 *  Total darkness < 100
 *
 * Created: 14/02/2020 16:25:09
 *  Author: ��igo Turrientes
 */ 


#ifndef LIGHTSENSOR_H_
#define LIGHTSENSOR_H_

#include <Arduino.h>

#define lightSensorPin A1

int getLightLevel();

#endif /* LIGHTSENSOR_H_ */
