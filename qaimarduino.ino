int inp;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);  
}

void loop() {
if (Serial.available()>0)
{
  inp=Serial.read();
  if (inp==1)
  {
    digitalWrite(13,HIGH);
    (10000);
  }
   else if (inp==3)
  {
    digitalWrite(13,LOW);
  }
}



}
