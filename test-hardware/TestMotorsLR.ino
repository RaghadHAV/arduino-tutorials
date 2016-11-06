#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 

int servopin = 11;  // define a pin used to be connect to the control terminal of the servo

void setup() 
{ 
  myservo.attach(servopin);  // attaches the servo on pin called servopin which is =9 to the servo object 
   
} 

void loop() 
{
  myservo.write(45); 
  delay(10000);
   myservo.write(0); 
  delay(10000);
   myservo.write(90); 
  delay(10000);
   myservo.write(135); 
  delay(10000);
   myservo.write(180); 
  delay(10000);
   myservo.write(90); 
  delay(10000);

  
}
