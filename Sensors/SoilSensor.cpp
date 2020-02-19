/*
 * SoilSensor.cpp
 *
 * This file manages the soil humidity sensor.
 *
 * Values:
 *	Dry soil: 0 to 300
 *	Humid soil: 300 to 700
 *	On water: 700 to 950
 *
 * Created: 14/02/2020 16:02:00
 *  Author: ��igo Turrientes
 */ 

 #include "SoilSensor.h"
 
 int getSoilHumidity() {
	 return analogRead(soilSensorPin);
 }
