/*
 * Halloween.ino: A program to control leds and indicator with an eerie strobing effect
 * Required Components
 * 1 Arduino Uno
 * 1 Breadboard
 * 1 Led
 * 1 100 Ω Resistor
 * 3 Jumper Wires
*/

//connect positve to pin 6, negative to ground
int led = 6;
int indicate = 13;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(indicate, OUTPUT);
}

void loop() {
  //turning the led on 
  analogWrite(led, 255);
  digitalWrite(indicate,LOW);
  delay(50);
  //turning the led off
  analogWrite(led, 0);
  digitalWrite(indicate,HIGH);
  delay(50);
}
