
int led = 6;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, 255); 
  delay(1000);
  analogWrite(led, 32);
  delay(1000);
  analogWrite(led,0); 
  delay(1000);
  analogWrite(led,32);
  delay(1000);
  analogWrite(led,255);
}
