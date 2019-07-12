#include <ESP32Servo.h>

Servo myServo;  // create a servo object


bool offOn = false;

void setup() {
  myServo.attach(21); // attaches the servo on pin 9 to the servo object
  pinMode(16,INPUT);
}

void loop() {
  
  if (digitalRead(16)){
    offOn = !offOn;
    delay (5);
    while (digitalRead(16));
    delay (5);
  }

  if (offOn){
    if((millis()/1000)%2==0){
      myServo.write(60);
    }else{
      myServo.write(120);
    }
  }  
}
