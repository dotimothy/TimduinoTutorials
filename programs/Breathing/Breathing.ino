/*
 * @author Timothy Do
 * Breathing.ino: A program to control leds with a breathing storbing effect
 * Required Components
 * 1 Arduino Uno
 * 1 Breadboard
 * 1 Led
 * 1 100 Ω Resistor
 * 3 Jumper Wires
*/
void dim();
void brighten();

//connect positve to pin 6, negative to ground
int led = 6;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  dim();
  delay(50);
  brighten();
  delay(50);
}

void dim() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(led, i);
    delay(2);
  }
}

void brighten() {
  for (int i = 255; i >= 0; i--) {
    analogWrite(led, i);
    delay(2);
  }
}
