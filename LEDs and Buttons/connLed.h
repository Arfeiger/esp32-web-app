#ifndef CONNLED_H_
#define CONNLED_H_

#include "apdata.h"

class Led
{
private:
  const int greenLed = 34;
  const int blueLed = 35;

public:
  static void connStatusLed();
  void turnOffLeds();
  void turnBlue();
  void turnGreen();
}

extern Led led;

#endif
