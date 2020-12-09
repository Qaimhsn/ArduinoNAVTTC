void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensval =analogRead(A0);
  int sensval1 =analogRead(A1);
  
  float volt=sensval*(5/1023.0);
  float volt1=sensval1*(5/1023.0);
  Serial.println(volt);
  Serial.println(volt1);
  if(volt >0.51 && volt1 >0.51)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
}
