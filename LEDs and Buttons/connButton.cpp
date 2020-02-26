#include "connButton.h"

static void Button::onPressOffButton() {
  Led::turnOffLeds();
  exit(0);
}

static void Button::onPressConnButton() {

  switch (connStatus) {
    case 0:
    APConn::disconnectFromAP();
    break;
    case 1:
    APConn::createAP();
    break;
    case 2:
    APConn::destroyAP();
    APConn::connectToAP();
    break;
  }

  if (connStatus < 2) {
    connStatus++;
  }
  else {
    connStatus = 0;
  }

  Led::connStatusLed();

}
