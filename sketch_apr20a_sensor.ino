#include <Ultrasonic.h>
Ultrasonic u=Ultrasonic(7,6);
#include <Servo.h>
Servo s=Servo();

void setup() {
  s.attach(10);
Serial.begin(9600);


}

void loop() {

  int d= u.distanceRead();

  Serial.println(d);

  if (10<d) {
    s.write(0);
    delay(1000);
  }else{
    s.write(180);
    delay(1000);
  }
}
