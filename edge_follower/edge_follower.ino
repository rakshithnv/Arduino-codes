void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(8);
  int y=digitalRead(9);

  if((x==1)&&(y==1))
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,1);
  }
  else if((x==1)&&(y==0))
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
    delay(500);
    
  }
  else if((x==0)&&(y==1))
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
    delay(500);
  }
  else
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
    delay(500);
      
  }
}
