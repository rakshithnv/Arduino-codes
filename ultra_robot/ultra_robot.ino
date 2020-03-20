#define trigpin 9
#define echopin 10
int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigpin,1);
  int x=digitalRead(8);
  delayMicroseconds(1000);
  digitalWrite(trigpin,0);
  int duration=pulseIn(echopin,HIGH);
  int distance=(duration/2)*(0.035);
  if(distance<15)
  {
    digitalWrite(13,1);
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,0);
    delay(1000);
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
    digitalWrite(13,0);
  }
  if(x==1)
  {
    i++;
    digitalWrite(13,1);
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,0);
    if(i>2)
    {
     delay(1000); 
    }
    delay(1000);
    digitalWrite
    (2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    if(i>2)
    {
      delay(1000);
    }
    delay(1000);
    if(i>2)
    {
      i=0;
    }
  }
  else
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(13,0);
  }
  
  

}
