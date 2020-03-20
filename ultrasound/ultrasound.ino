#define trigpin 9
#define echopin 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,1);
  delayMicroseconds(1000);
  digitalWrite(trigpin,0);
  int duration=pulseIn(echopin,HIGH);
  int distance=(duration/2)*(0.035);
  if(distance<15)
  {
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,0);
    delay(500);
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    delay(1000);
  }
  else
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,1);
  }
}
