/*
* On.ino: Turns on the pin 13 (led indicator) for Arduino Uno
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
  //setting pin 13 to HIGH
  digitalWrite(led, HIGH);

}
