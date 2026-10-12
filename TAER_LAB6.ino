#include <Arduino.h>
const uint8_t BUTTON_PIN = 23;
const uint8_t MOTOR_IN1  = 21;
const uint8_t MOTOR_IN2  = 22;
const uint8_t DRIVER_EN  = 27;  

void setup() {
  pinMode(DRIVER_EN, OUTPUT);
  digitalWrite(DRIVER_EN, LOW);   
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
  digitalWrite(MOTOR_IN1, HIGH);  
  digitalWrite(MOTOR_IN2, LOW);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  const bool pressed = (digitalRead(BUTTON_PIN) == LOW);
  digitalWrite(DRIVER_EN, pressed ? HIGH : LOW);  
}
