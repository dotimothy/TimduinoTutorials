 /*
* Blinking.ino: Blinks pin 13 (led indicator) on the Arduino Uno
* Required Components 
* 1 Arduino Uno
*/

//led variable to direct to pin 13
int led = 13;

void setup() {
  //setting outputs
  pinMode(led, OUTPUT);
}

void loop() {
  //turn on LED
  digitalWrite(led, HIGH);
  delay(500);
  //turn off LED
  digitalWrite(led, LOW);
  delay(500);
}
