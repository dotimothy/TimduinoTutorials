int pin = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}

//loop
void loop() {
  //pwm(pin,1.075*440);
  for(int freq = 0; freq < 20000; freq++) {
    square(pin,freq,50);
  }
   for(int freq = 20000; freq > 0; freq--) {
    square(pin,freq,50);
  }
}

void pwm(int pin, float frequency) {
  for(int i = 0; i < 100; i++) {
    square(pin,frequency,i);
  }
  for(int i = 100; i > 0; i--) {
    square(pin,frequency,i);
  }
}


//generates square wave
void square(int pin,float frequency,float duty) {
  digitalWrite(pin,HIGH);
  frequency >= 100 ? delayMicroseconds(1000000.0/((100.0/duty)*frequency)) : delay(1000.0/((100.0/duty)*frequency));
  digitalWrite(pin,LOW);
  frequency >= 100 ? delayMicroseconds(1000000.0/((100.0/(100.0-duty))*frequency)) : delay(1000.0/((100.0/(100.0-duty)*frequency)));
}
