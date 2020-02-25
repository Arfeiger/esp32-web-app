/*
 * LightSensor.cpp
 *
 * This file manages the light sensor.
 *
 * Values:
 *  Very bright: > 950
 *  Bright 700 to 950
 *  Moody: 400 to 700
 *  Dark: 100 to 400
 *  Total darkness < 100
 *
 * Created: 14/02/2020 16:25:26
 *  Author: ��igo Turrientes
 */ 


#include "LightSensor.h"

int getLightLevel() {
	return analogRead(lightSensorPin);
}
