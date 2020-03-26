/*
* Sensors
*
* Unified sensors code.
*
* Created 27/2/2020
* by Íñigo Turrientes
* 	 Diego Peribanez
*
*/
#include "Sensors.h"

dht11 dht11Sensor; //Instantiate a dht11 (ambient temperature and humidity sensor)

/*
 * Set up the sensors pinout.
 */
void setupSensors() {
	pinMode(Pinout::lightSensorPin, INPUT);
	pinMode(Pinout::soilSensorPin, INPUT);
	pinMode(Pinout::dht11SensorPin, INPUT);
}

/*
 * Returns analog soil value.
 *
 * Values:
 *  Dry soil: 0 to 300
 *  Humid soil: 300 to 700
 *  On water: 700 to 950
 */
int Sensors::getSoil() {
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
int Sensors::getLight() {
	return analogRead(lightSensorPin) / 4;
}

/*
 * Returns ambient temperature in celsius degrees.
 */
int Sensors::getTemperature() {
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

/*
 * Writes the updated sensors data in an array.
 */
void getSensorsData(int data[]) {
	data[0] = getTemperature();
	data[1] = getHumidity();
	data[2] = getSoil();
	data[3] = getLight();
}
