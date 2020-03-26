/*
 * IpotServer
 *
 * Setup of the Server for the iPot
 *
 * by Diego Peribanez
 *
 */

#include "IpotServer.h"

const char* ssidAP = "iPot";
const char* passwordAP = "thisisipot";

void setupServer(WiFiServer server) {
  WiFi.softAP(ssidAP, passwordAP);
  server.begin();
}
