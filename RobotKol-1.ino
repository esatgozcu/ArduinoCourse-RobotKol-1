#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

void setup() {
  
  myservo1.attach(6); 
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11); 

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
}

void loop() {

  int potansDeger1 = analogRead(A0);
  int servoAci1 = map(potansDeger1,0,1023,0,180);
  myservo1.write(servoAci1);
  
  int potansDeger2 = analogRead(A1);
  int servoAci2 = map(potansDeger2,0,1023,0,180);
  myservo2.write(servoAci2);
  
  int potansDeger3 = analogRead(A2);
  int servoAci3 = map(potansDeger3,0,1023,0,180);
  myservo3.write(servoAci3);
  
  int potansDeger4 = analogRead(A3);
  int servoAci4 = map(potansDeger4,0,1023,0,180);
  myservo4.write(servoAci4);
}

