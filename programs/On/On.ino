/*
 * @author Timothy Do
 * Last Modified 9/13/2020
 * On.ino: Turns on the pin 13 (led indicator) on the Arduino Uno
 * Required Components
 * Arduino Uno
*/

//setting led pin to pin 13
int led = 13;
void setup() {
  // setting outputs
  pinMode(led, OUTPUT);
}

void loop() {
  //setting pin 13 to HIGH (thus turning it on)
  digitalWrite(led, HIGH);
}
