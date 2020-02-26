#ifndef APCONN_H_
#define APCONN_H_

class APConn
{
  
public:
  void connectToAP();
  void disconnectFromAP();
  void setSSID(char newSsid);
  char getSSID();
}

extern APConn APConn;

#endif
