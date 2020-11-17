/*
 * @author Timothy Do
 * simpleColor.ino: A program for RGB Leds to Display Different Colors using DigitalWrite
 * 
 */

//Setting Pins Red is 12, Green is 7, Blue is 3
int red = 12;
int green = 7;
int blue = 3;

void off();
void onRed();
void onGreen(); 
void onBlue();
void pause(); 

//set pins to each color cathode
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void off() {
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
}

void onRed() {
  digitalWrite(red, HIGH);
}

void onGreen() {
  digitalWrite(green, HIGH);
}

void onBlue() {
  digitalWrite(blue, HIGH);
}

void pause() {
  delay(500);
}


void loop() {
  //Red
  onRed();
  pause(); 
  off();
  //Blue 
  onBlue();
  pause();
  off();
  //Green
  onGreen(); 
  pause();
  off();
  //Purple
  onRed(); 
  onBlue();
  pause();
  off();
  //Yellow
  onRed();
  onGreen();
  pause();
  off();
  //Cyan
  onGreen();
  onBlue();
  pause();
  off(); 
  //White
  onRed();
  onGreen();
  onBlue();
  pause();
  //Off
  off();
  pause();
}
