/*
 * Levels.ino: Goes in between 3 levels of brightness for LED in Pin 6
 * Required Components:
 * 1 Arduino Uno
 * 1 Breadboard
 * 1 1K Ω Resistor
 */

 //setting led variable to pin 6
int led = 6;
void setup() {
  //setting outputs
  pinMode(led, OUTPUT);
}

void loop() {
  //bright
  analogWrite(led, 255); 
  delay(1000);
  //dimmer
  analogWrite(led, 32);
  delay(1000);
  //off
  analogWrite(led,0); 
  delay(1000);
  //dimmer
  analogWrite(led,32);
  delay(1000);
  //bright
  analogWrite(led,255);
}
