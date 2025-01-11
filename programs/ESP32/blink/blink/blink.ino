#include <Arduino.h>

const int ledPin = 2; // Built-in LED pin on many ESP32 boards

void setup() {
  // Initialize digital pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH); 
  delay(1000);             // Wait for 1 second

  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(1000);             // Wait for 1 second
}