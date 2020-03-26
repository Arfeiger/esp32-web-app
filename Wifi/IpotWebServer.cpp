/*
 * IpotWebServer
 *
 * Setup of the Web Server for the iPot
 *
 * by Diego Peribanez
 *
 */

#include "IpotWebServer.h"

void IpotWebServer::showUI(WiFiClient client, int data[]) {
  pushHttpHeader(client);
  pushWebpageHeader(client);
  pushCSS(client);
  pushWebpage(client, data);
}

void IpotWebServer::pushHttpHeader(WiFiClient client) {
  client.println("HTTP/1.1 200 OK");
  client.println("Content-type:text/html");
  client.println("Connection: close");
}

void IpotWebServer::pushWebpageHeader(WiFiClient client) {
  client.println("<!DOCTYPE html><html>");
  client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
  client.println("<link rel=\"icon\" href=\"data:,\">");
}

void IpotWebServer::pushCSS(WiFiClient client) {
  client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
  client.println(".button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px; }");
  client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;");
}

void IpotWebServer::pushWebpage(WiFiClient client, int data[]) {
  client.println("<body><h1>iPot</h1>");
  client.println("<p>Temperature</p>");
  client.println("<p><a href=\"/update\"><button class=\"button\">" + String(data[0]) + "ºC</button></a></p>");
  client.println("<p>Light</p>");
  client.println("<p><a href=\"/update\"><button class=\"button\">" + String(data[3]) + "</button></a></p>");
  client.println("<p>Humidity</p>");
  client.println("<p><a href=\"/update\"><button class=\"button\">" + String(data[1]) + "</button></a></p>");
  client.println("<p>Soil</p>");
  client.println("<p><a href=\"/update\"><button class=\"button\">" + String(data[2]) + "</button></a></p>");
  client.println("</body></html>");
}
