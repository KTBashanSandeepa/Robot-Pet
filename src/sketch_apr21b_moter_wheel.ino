

void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);

analogWrite(11,200);
analogWrite(5,200);

}

void loop() {
  

  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  delay(1000);

    digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  delay(1000);
}
