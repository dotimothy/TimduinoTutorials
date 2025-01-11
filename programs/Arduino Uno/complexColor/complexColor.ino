/*
 * @author Timothy Do
 * simpleColor.ino: A program for RGB Leds to Display Different Colors using digitalWrite
 * 
 */

//Setting Pins Red is 12, Green is 7, Blue is 3
int redPin = 12;
int greenPin = 7;
int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void pause() {
  delay(500);
}

void off() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void red() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void orange() {
  analogWrite(redPin, 255); 
  analogWrite(greenPin, 165); 
  analogWrite(bluePin, 0);
}

void half() {
  analogWrite(redPin, 127); 
  analogWrite(greenPin, 127); 
  analogWrite(bluePin, 127);
}
void loop() {
  off();
  red();
  pause();
  off();
  orange();
  pause();
  off();
  half();
  pause();
  
}
