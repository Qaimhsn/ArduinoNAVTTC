float x;
void setup() {
  Serial.begin(9600);
}

void loop() {
  x=analogRead(A0);
  float senval=x*(5.0/1023.0);
  Serial.println(senval);
}




