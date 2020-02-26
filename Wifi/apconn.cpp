#include "apconn.h"
#include "apdata.h"
#include "WiFi.h"
#include "wifi_drv.h"

void APConn::connectToAP() {
  WiFiDrv::wifiSetPassphrase(ssid, strlen(ssid), password, strlen(password));
}

void APConn::disconnectFromAP() {
  WiFiDrv::disconnect();
}

void APConn::setSSID(char newSsid) {
  ssid = strcpy(newSsid);
}

char APConn::getSSID() {
  return ssid;
}
