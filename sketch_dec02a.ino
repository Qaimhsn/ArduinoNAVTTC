#define segA 0
#define segB 1
#define segC 2
#define segD 3
#define segE 4
#define segG 5
#define segF 6
int count=0;
void setup() {
  for (int i=0;i<7;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  switch(count)
  {
    case 0:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,LOW);
    break;
    case 1:
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,LOW);
    break;
    case 2:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,LOW);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);
    break;
    case 3:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);
    break;
    case 4:
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);    
    break;
    case 5:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);    
    break;
    case 6:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);    
    break;
    case 7:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);    
    break;
    case 8:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);    
    break;
    case 9:
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;
  }
  if(count<10)
  {
    count++;
    delay(5000);
  }
   if(count==10)
  {
    count=0;
    delay(1000);
  }
}
