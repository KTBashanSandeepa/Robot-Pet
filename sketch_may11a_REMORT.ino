#include <Ultrasonic.h>
Ultrasonic u = Ultrasonic(3, 4);

#include <Servo.h>
Servo s = Servo();

void setup() {
  // put your setup code here, to run once:

  s.attach(8);
  Serial.begin(9600);

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
    int d = u.read();
    if (d > 10) {
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


  }

  if (x == '3') {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }

  if (x == '0') {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }

  if (x == '2') {
    s.write(30);
    delay(300);
    int d = u.read();
    if (d > 10) {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);
      delay(300);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
    }
    s.write(90);
  }

  if (x == '4') {
    s.write(150);
    delay(300);
    int d = u.read();
    if (d > 10) {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      delay(300);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
    }
    s.write(90);
  }



}
