
////////////////code by chiranth///////////
const int ledPin = 2; //bulb

const int ldrPin = A0;  //trig output

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);
pinMode(3,OUTPUT); //GND for relay
pinMode(8,OUTPUT); //5V supply for sensor

}

void loop() {
  digitalWrite(8,1); // powering relay
digitalWrite(3,0); // gnd
int ldrStatus = analogRead(ldrPin);  //reading values

if (ldrStatus <=1000) {  //1000 is my resistance , acc to my room light and area

digitalWrite(ledPin, LOW);

Serial.println("LDR is DARK, LED is ON");

}

else {

digitalWrite(ledPin, HIGH);

Serial.println("---------------");

}

}
