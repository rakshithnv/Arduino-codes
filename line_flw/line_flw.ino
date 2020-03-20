    #define mr1 11
#define ml1 9
#define mr2 10
#define ml2 8
#define il 2
#define ir 3
#define ol 4
#define our 5

int x,y,u,v;

void setup() {
  // put your setup code here, to run once:

pinMode(ml1,OUTPUT);
    pinMode(ml2,OUTPUT);
    pinMode(mr1,OUTPUT);
    pinMode(mr2,OUTPUT);
    pinMode(il,INPUT);
    pinMode(ir,INPUT);
    pinMode(ol,INPUT);
    pinMode(our,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=digitalRead(il);
  y=digitalRead(ir);
  u=digitalRead(ul);
  v=digitalRead(our);
  
  if(u==1&&x==0&&y==0&&v==1)
  {
    digitalWrite(ml1,1);
      digitalWrite(ml2,0);
      digitalWrite(mr1,1);
      digitalWrite(mr2,0);
  }
  else if(u==1x==0&&y==1&&v==0)
  {
     digitalWrite(ml1,0);
      digitalWrite(ml2,0);
      digitalWrite(mr1,1);
      digitalWrite(mr2,0);
  }
  else if(u==0&&x==1&&y==0&&v==1)
  {
     digitalWrite(ml1,1);
      digitalWrite(ml2,0);
      digitalWrite(mr1,0);
      digitalWrite(mr2,0);
  }
  else
  {
     digitalWrite(ml1,0);
      digitalWrite(ml2,0);
      digitalWrite(mr1,0);
      digitalWrite(mr2,0);
  }
      
  
    
}
