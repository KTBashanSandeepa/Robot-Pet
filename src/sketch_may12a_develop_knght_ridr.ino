#include <Servo.h>
Servo s = Servo();
void setup() {
  // put your setup code here, to run once:
  s.attach(8);
  Serial.begin(9600);
pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  analogWrite(11, 255);
  analogWrite(5, 255);
}

void loop() {


  // put your main code here, to run repeatedly:
  int x = Serial.read();

  if (x == '1' ) {
    s.write(90);
    delay(300);

    digitalWrite(4,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(2,LOW);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);
   
   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,HIGH); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,LOW); 
   digitalWrite(9,HIGH);
   digitalWrite(8,LOW);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,HIGH);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,LOW); 
   digitalWrite(9,HIGH);
   digitalWrite(8,LOW);
   delay(100);

   
   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(10,HIGH); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);

   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);

   digitalWrite(4,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(10,LOW); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   delay(100);
   
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
  if (x == '0') {

    digitalWrite(4,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(10,HIGH); 
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   
   
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
}
