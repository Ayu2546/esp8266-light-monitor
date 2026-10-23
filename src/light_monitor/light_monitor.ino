const int CDS_PIN = 4;          // GPIO4
const unsigned long INTERVAL = 1000;

void setup() {
  Serial.begin(115200);

  pinMode(CDS_PIN, INPUT_PULLUP);

  Serial.println("CdS sensor initialized.");
}

void loop() {
  int sensorValue = digitalRead(CDS_PIN);

  Serial.print("Sensor value: ");
  Serial.print(sensorValue);

  if (sensorValue == LOW) {
    Serial.println(" | Bright");
  } else {
    Serial.println(" | Dark");
  }

  delay(INTERVAL);
}
