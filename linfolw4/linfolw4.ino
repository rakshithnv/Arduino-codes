#define wl
#define wr
#define bl
#define br

#define lm1
#define lm2
#define rm1
#define rm2



void setup() {
  // put your setup code here, to run once:
  pinMode(wl,INPUT);
  pinMode(wr,INPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(bl,INPUT);
  pinMode(br,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(wl);
  int y=digitalRead(bl);
  int z=digitalRead(br);
  int a=digitalRead(wr);

  if(x==0&&y==1&&z==1&&a==0)
  {
    digitalWrite(lm1,1);
    digitalWrite(lm2,0);
    digitalWrite(rm1,1);
    digitalWrite(rm2,0);
  }
  else if(x==1&&y==0&&z==0&&a==0||x==1&&y==1&&z==0&&a==0||x==0&&y==1&&z==0&&a==0)
  {
    digitalWrite(lm1,0);
    digitalWrite(lm2,0);
    digitalWrite(rm1,1);
    digitalWrite(rm2,0);
  }
  else if(x==0&&y==0&&z==1&&a==1||x==0&&y==0&&z==0&&a==1&&x==0||x==0&&y==0&&z==1&&a==0)
  {
    digitalWrite(lm1,1);
    digitalWrite(lm2,0);
    digitalWrite(rm1,0);
    digitalWrite(rm2,0);
  }
  else 
  {
    digitalWrite(lm1,0);
    digitalWrite(lm2,0);
    digitalWrite(rm1,0);
    digitalWrite(rm2,0);
  }
}
