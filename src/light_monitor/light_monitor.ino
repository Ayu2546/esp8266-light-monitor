void setup() {
  Serial.begin(115200);
  Serial.println("ESP8266 initialized!");
}

void loop() {
  Serial.println("ESP8266 is running!");
  delay(1000);
}
