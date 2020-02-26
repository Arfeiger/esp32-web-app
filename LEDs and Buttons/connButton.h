#ifndef CONNBUTTON_H_
#define CONNBUTTON_H_

class Button
{

private:
  const int connModeButton = 25;
  const int offButton = 26;

public:
  static void onPressOffButton();
  static void onPressConnButton();
}

extern Button button;

#endif
