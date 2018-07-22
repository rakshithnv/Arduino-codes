int ledPin=3;
int rampTime=10;
void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  for(int i;i <256;i++)
  {
  // put your main code here, to run repeatedly:
analogWrite(ledPin,i);
delay(rampTime);
Serial.println(i);
}
 for(int i=255;i >0;i--)
  {
  // put your main code here, to run repeatedly:
analogWrite(ledPin,i);
delay(rampTime);
Serial.println(i);
}
}
