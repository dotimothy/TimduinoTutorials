/*
* Off.ino: Turns off pin 13 (led indicator) on the Arduino Uno
* Required Components 
* 1 Arduino Uno
*/

//led variable to direct to pin 13
int led = 13;

void setup() {
  // setting outputs
  pinMode(led, OUTPUT);
}

void loop() {
  //setting led to LOW (thus turning it off)
  digitalWrite(led, LOW);

}
