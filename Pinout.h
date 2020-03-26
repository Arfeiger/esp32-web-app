/*
 * Pinout
 *
 * Pinout (change for each project)
 *
 * by Diego Peribanez
 *
 */

#ifndef PINOUT_H_
#define PINOUT_H_

class Pinout
{
public:
  const static int greenLed = 35;
  const static int blueLed = 34;
  const static int buttonOff = 25;
  const static int buttonMode = 26;
  const static int dht11SensorPin = 5;
  const static int lightSensorPin = 8;
  const static int soilSensorPin = 10;
};

extern Pinout pinout;

#endif
