/*
 * @author Timothy Do
 * RGB.ino: A program for RGB Leds to immersively flow the Rainbow
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

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
}
