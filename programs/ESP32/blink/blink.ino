#include <Arduino.h>

const int ledPin = 2; // Built-in LED pin on many ESP32 boards
const int interval = 500; // Delay in ms

void setup() {
  // Initialize digital pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH); 
  delay(interval);             

  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(interval);             
}