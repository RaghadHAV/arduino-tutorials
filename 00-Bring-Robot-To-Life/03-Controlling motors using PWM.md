##What is the servo motors? 
The servo motors (or servos) ----- You can found these motors many places: from toys to home electronics to cars and air-planes. it can be used to control steering in the remote control vehicles, or control the angles of surface due to the its ability to rotate through about 180 or sometimes continuous rotation, and of course robot wouldn't be exist without the servo motors. 
(need a picture for a servo)


###How does Servomotors work?
Servo motors consist of:
 1- Small direct current(DC) which spin at high rotation per minutes but give out very low torque (it is a twisting force something smiler when you open a jar, you in fact apply a torque). 

2- A gears slow down the high speed of the motors while increase the torque at the same time.

Gears could be either made form plastic in case of the cheap servo motors, or made of metal for the higher expensive motors that design for heavier work.
Now the way this motors work is receiving a feedback from a sensor positioned on a gear. This sensor that connected to a small circuit board, tells this circuit about the information of the servo rotation. Moreover, there is a signal received by the circuit and decoded to give the user the option about how far the servos should rotate, also determine to which direction to rotate to give the desired position.

To simplify the concept, imagine you instruct a friend for where your you wants him to go in a play field, you need to continuously ask your friend to move forward/ stop/ move backward in order to place him in the right position. Now, if you are a microprocessor and your friend is a simple motor then you need sometime to watch and give a command to place her in the right position this called a feedback loop. WHile if your friend were a servo motor, then all what you need to do is to say "go to 4.5 meters" then this would lead him directly to the right spot. 
This is why the servos is simple and useful to use for many robotic application since it has this automatic seeking behaviour, which mean you need only to tell what you wants to be done and the servos to the rest easily. 


###Control the position of a servomotor 

You will use the Arduino broad to control the position of the servomotor's arm ans set it to a specific angle. The arduino send a series of pulses as a command to the servomotor. These pulses is a set of high and low voltage which stay high for a while then return low. 
For this experiment, you will send the desired angle using the arduion serial monitor 

The figure bellow shows how the arduino and the servo are wired together 

![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/servomotor.png)

1- Connect the black/brown wire of the servo to the ground GND of the arduino. 
2- Connect the red wire of the servo to the +5V pin of the arduino. 
3- Connect the yellow/white wire of the servo to the digital pin on the arduino.

The servo library include all the work with the servo motors, you will see this in this when you run the code bellow:

```
#include <servo.h> 

servo myservo;  // create servo object to control a servo 

int servopin = 9;  // define a pin used to be connect to the control terminal of the servo

void setup() 
{ 
  myservo.attach(servopin);  // attaches the servo on pin called servopin which is =9 to the servo object 
  myservo.write(90);         //set the current servo angle to 90
  Serial.begin(9600);        //This command enavle you to use the serial monitor to input values
  Serial.pringln("Enter the value of the angle in degree");   //This is a message instructs the user for what to do during the running time  

} 

void loop() 
{
 if(Serial.available()){   //if there is available command then this function will convert it to number 
 int angle=Serial.parseInt();   //parsInt converts into numbers
 myservo.write(angle);        // The new servo angle will be set here 
  } 
}

```

After you upload the sketch to the arduino board, the motor arm should spin by its defoalt value 90. To insert the desired value for the abgle you need to open the serial monitor and you should be able to input values between 0-180. 
