#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 

int servopin = 11;  // define a pin used to be connect to the control terminal of the servo

void setup() 
{ 
  myservo.attach(servopin);  // attaches the servo on pin called servopin which is =9 to the servo object 
   
} 

void loop() 
{
  myservo.writeMicroseconds(1500);
  delay(1000);
   
myservo.writeMicroseconds(700);
  delay(1000);
   myservo.writeMicroseconds(2400);
  delay(1000);
  
}
