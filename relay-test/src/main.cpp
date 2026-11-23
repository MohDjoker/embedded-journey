#include <Arduino.h>

const int RELAY_PIN = 26;
const int LED_PIN = 2;      // onboard LED

void setup() {
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);  // relay off
  digitalWrite(LED_PIN, LOW);     // LED off
}

void loop() {
  Serial.println("Relay ON");
  digitalWrite(RELAY_PIN, LOW);   // active LOW: relay ON
  digitalWrite(LED_PIN, HIGH);    // LED on = relay on
  delay(2000);

  Serial.println("Relay OFF");
  digitalWrite(RELAY_PIN, HIGH);  // relay OFF
  digitalWrite(LED_PIN, LOW);     // LED off = relay off
  delay(2000);
}