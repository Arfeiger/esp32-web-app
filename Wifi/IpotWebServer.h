/*
 * IpotWebServer
 *
 * Setup of the Web Server for the iPot
 *
 * by Diego Peribanez
 *
 */

#include <WiFi.h>

class IpotWebServer
{
public:
  void showUI(WiFiClient client, int data[]);
  void pushHttpHeader(WiFiClient client);
  void pushWebpageHeader(WiFiClient client);
  void pushCSS(WiFiClient client);
  void pushWebpage(WiFiClient client, int data[]);
}
