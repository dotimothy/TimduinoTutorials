#include <Arduino.h>

const int outPin = 2; // Output Pin
const int interval = 500; // Delay in ms

void setup() {
  // Initialize digital pin as output
  pinMode(outPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(outPin, HIGH); 
  delay(interval);             

  // Turn the LED off
  digitalWrite(outPin, LOW);
  delay(interval);             
}