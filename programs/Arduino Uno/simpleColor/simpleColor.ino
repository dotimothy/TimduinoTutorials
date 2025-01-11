/*
 * @author Timothy Do
 * simpleColor.ino: A program for RGB Leds to Display Different Colors using digitalWrite
 * 
 */

//Setting Pins Red is 12, Green is 7, Blue is 3
int red = 12;
int green = 7;
int blue = 3;

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

void pause() {
  delay(200);
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

void loop() {
  //Red
  off();
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
}
