/* Amp.ino: Digitally Amplifies an Audio Signal using the Arduino */
/* Required Components
 *  1 Arduino Uno
 *  2 Aux Cables
 *  4 Alligator Clips
 *  4 Jumpers
 */

//Pin setups
int analogIn =  0;
int digitalOut = 12;
 
void setup() {
  pinMode(digitalOut,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int sample = analogRead(analogIn);
  Serial.print(sample);
  Serial.print('\n');
  analogWrite(digitalOut, sample*10);
}
