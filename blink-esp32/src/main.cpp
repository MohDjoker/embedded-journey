#include <Arduino.h>

const int LED_PIN = 2;   // onboard LED

void setup() {
  pinMode(LED_PIN, OUTPUT);   // make the pin an output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED on
  delay(500);                   // wait 0.5 seconds
  digitalWrite(LED_PIN, LOW);   // LED off
  delay(500);
}