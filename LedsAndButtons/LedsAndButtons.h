#include <Arduino.h>
#include "Pinout.h"

class LedsAndButtons
{
public:
  void setupLedsAndButtons();
  void turnOff();
  void turnBlue();
  void turnGreen();
  void ledMode(int mode);
};

extern LedsAndButtons ledsAndButtons;
