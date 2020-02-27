/*
* Sensors
*
* Unified sensors code.
*
* Created 27/2/2020
* by Íñigo Turrientes
*
*
*/
#include "Sensors.h"

dht11 dht11Sensor; //Instantiate a dht11 (ambient temperature and humidity sensor)

/*
 * Returns analog soil value.
 * 
 * Values:
 *  Dry soil: 0 to 300
 *  Humid soil: 300 to 700
 *  On water: 700 to 950
 */
int Sensors::getSoilHumidity() {
	return analogRead(soilSensorPin) / 4;
}

/*
 * Returns analog light value.
 * 
 * Values:
 *  Very bright: > 950
 *  Bright 700 to 950
 *  Moody: 400 to 700
 *  Dark: 100 to 400
 *  Total darkness < 100
 *  
 */
int Sensors::getLightLevel() {
	return analogRead(lightSensorPin) / 4;
}

/*
 * Returns ambient temperature in celsius degrees.
 */
int Sensors::getTemp() {
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.temperature;
}

/*
 * Returns ambient humidity in percentage.
 */
int Sensors::getHumidity(){
  dht11Sensor.read(dht11SensorPin);
  return dht11Sensor.humidity;
}
