#include "connLed.h"
#include "apdata.h"

static void Led::connStatusLed() {
  switch (connStatus) {
    case 0:
    turnOffLeds();
    break;

    case 1:
    turnBlue();
    break;

    case 2:
    turnGreen();
  }
}

void Led::turnOffLeds() {
  digitalWrite(blueLed, LOW);
  digitalWrite(greenLed, LOW);
}

void Led::turnBlue() {
  digitalWrite(blueLed, HIGH);
  digitalWrite(greenLed, LOW);
}

void Led::turnGreen() {
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, LOW);
}
