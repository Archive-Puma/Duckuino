#define DELAY 200

void RELEASE()
{
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
}

void GUI_R()
{
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  RELEASE();
  delay(DELAY);
}

void ALT_S()
{
  delay(750);
  Keyboard.set_modifier(MODIFIERKEY_ALT);
  Keyboard.set_key1(KEY_S);
  Keyboard.send_now();
  RELEASE();
  delay(DELAY);
}

void CTRL_Z()
{
  Keyboard.set_modifier(MODIFIERKEY_CTRL);
  Keyboard.set_key1(KEY_Z);
  Keyboard.send_now();
  RELEASE();
  delay(DELAY);
}

void ENTER()
{
  Keyboard.set_modifier(0);
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  RELEASE();
  delay(DELAY);
}

void STRING(String str)
{
  Keyboard.print(str);
}

void RUN() { GUI_R(); }
void CONFIRM() { ALT_S(); }

void loop() {}

// Keyboard: https://www.pjrc.com/teensy/td_keyboard.html
