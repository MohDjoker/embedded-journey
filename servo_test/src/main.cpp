#include <Arduino.h>
#include <ESP32Servo.h>

Servo fanServo;
const int SERVO_PIN = 18;

// Test angles. We will measure the real ones later.
int levelAngles[5] = {0, 30, 60, 120, 160};

void setup() {
  fanServo.attach(SERVO_PIN, 500, 2400);
}

void loop() {

  fanServo.write(0);
  

  /*for (int i = 0; i < 5; i++) {
    fanServo.write(levelAngles[i]);  // move to t his angle
    delay(5000);                     // wait 1.5 seconds
  }
    */
}