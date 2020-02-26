#ifndef APDATA_H_
#define APDATA_H_

class APData
{
public:
  char* ssid = "emblab";
  char* password = "emblab123!";
  char* ssidAP = "iPot";
  char* passwordAP = "thisisipod";
  int connStatus = 0;
}

extern APData APdata;

#endif
