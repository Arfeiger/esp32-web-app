/*
String Config::sendData(String date ,int light,int soil_humidity ,int temperature,int humidity){
    
  String strUrl = "<!DOCTYPE html> <html>\n";
  strUrl +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  strUrl +="<title>ESP32 Weather Station</title>\n";
  strUrl +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  strUrl +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;}\n";
  strUrl +="p {font-size: 24px;color: #444444;margin-bottom: 10px;}\n";
  strUrl +="</style>\n";
  strUrl +="</head>\n";
  strUrl +="<body>\n";
  strUrl +="<div id=\"webpage\">\n";
  strUrl +="<h1>ESP32 WebServer</h1>\n";

  strUrl +="<p>Date: ";
  strUrl += date;
  strUrl +="</p>";

  strUrl +="<p>Light level: ";
  strUrl += light;
  strUrl +="</p>";

  strUrl +="<p>Soil humidity: ";
  strUrl += soil_humidity;
  strUrl +="</p>";

  strUrl +="<p>Ambient temperature: ";
  strUrl += temperature;
  strUrl +="</p>";

  strUrl +="<p>Ambient humidity: ";
  strUrl += humidity;
  strUrl +="</p>";

  strUrl +="</div>\n";
  strUrl +="</body>\n";
  strUrl +="</html>\n";
  return strUrl;
}
*/