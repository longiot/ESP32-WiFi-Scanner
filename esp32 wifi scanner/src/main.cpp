#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  while (!Serial);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("setup done. Starting WiFi scan...");
}

void loop() {
  Serial.println("Scanning for WiFi networks...");
  int n = WiFi.scanNetworks();
  if (n == 0){
    Serial.println("No networks found");
    }
    else {
    Serial.print(n);
    Serial.println(" networks found:");
    for (int i = 0; i < n; ++i){
      Serial.println(WiFi.SSID(i));
      Serial.print("Signal strength: ");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm");
      delay (100);
    }
  }
  WiFi.scanDelete();
  Serial.println("Scan complete!...");
  Serial.println("-------------------------------------");
  delay(10000);
  }