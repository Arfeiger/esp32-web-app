/*
 * Sensors
 * 
 * Code for testing sensors outputs.
 * 
 * Created 16/2/2020
 * by Íñigo Turrientes
 */
 
//#include "LightSensor.h"
//#include "SoilSensor.h"
//#include "TempAndHumiditySensor.h"
#include "Sensors.h"

Sensors sensor;

void setup() {
  pinMode(lightSensorPin, INPUT);
  pinMode(soilSensorPin, INPUT);
  pinMode(dht11SensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("\nLight level: ");
  Serial.println(sensor.getLightLevel());
  Serial.print("Soil humidity: ");
  Serial.println(sensor.getSoilHumidity());
  Serial.print("Ambient temperature: ");
  Serial.println(sensor.getTemp());  
  Serial.print("Ambient humidity: ");
  Serial.println(sensor.getHumidity());
  delay(1000);
}
