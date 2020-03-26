#include "LedsAndButtons.h"

void setupLedsAndButtons() {
  pinMode(Pinout::greenLed, OUTPUT);
  pinMode(Pinout::blueLed, OUTPUT);
  pinMode(Pinout::buttonOff, INPUT);
  pinMode(Pinout::buttonMode, INPUT);
}

void turnOff() {
  digitalWrite(Pinout::greenLed, LOW);
  digitalWrite(Pinout::blueLed, LOW);
}

void turnBlue() {
  digitalWrite(Pinout::greenLed, LOW);
  digitalWrite(Pinout::blueLed, HIGH);
}

void turnGreen() {
  digitalWrite(Pinout::greenLed, HIGH);
  digitalWrite(Pinout::blueLed, LOW);
}

void ledMode(int mode) {
  switch(mode) {
    case 0:
    turnOff();
    break;
    case 1:
    turnBlue();
    break;
    case 2:
    turnGreen();
    break;
  }
}
