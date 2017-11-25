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
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(defaultDelay);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.press(KEY_LEFT_ALT);
  typeKey(225);
  typeKey(231);
  typeKey(227);
  Keyboard.releaseAll();

  Keyboard.print("Hola Mundo!");

  Keyboard.press(KEY_LEFT_ALT);
  typeKey(225);
  typeKey(231);
  typeKey(227);
  Keyboard.releaseAll();

  Keyboard.print("Parece que ahora esto funciona bien en espa");

  Keyboard.press(KEY_LEFT_ALT);
  typeKey(225);
  typeKey(230);
  typeKey(228);
  Keyboard.releaseAll();
  
  Keyboard.print("ol!");

  typeKey(KEY_RETURN);
  for(int i = 0; i < 1; i++) {
    typeKey(KEY_RETURN);
  }

  delay(defaultDelay);
  Keyboard.print("Convertidor utilizado: https://malduino.com/converter/index.html");

  delay(defaultDelay);
  typeKey(KEY_RETURN);
  
  /* ----- End-Script -----*/
  
  Keyboard.end();
}

void loop(){ /* ----- Unused-Loop -----*/ }
