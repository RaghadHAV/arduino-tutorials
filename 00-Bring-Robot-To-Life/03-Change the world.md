##What is the servo motor? 
The servo motors (or servos) are a compilation of stepper motors and DC motors which we are going to explain later in this tutorial. You can found these motors many places: from toys to home electronics to cars and air-planes. it can be used to control steering in the remote control vehicles, or control the angles of surface due to the its ability to rotate through about 180 or sometimes continuous rotation, and of course robot wouldn't be exist without the servo motors. 

Servo motors come in a different shapes and sizes. Mainly it has tree wires with a different colours, red, black/brown and yellow. The red one is connecting to power, the black/brown to the ground and the yellow wire is connected to the signal.

 ![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/servomotors.png)

###How does Servomotors work?
Servo motors consist of:
 1- Small direct current(DC) which spin at high rotation per minutes but give out very low torque (it is a twisting force something smiler when you open a jar, you in fact apply a torque). 

2- A gears slow down the high speed of the motors while increase the torque at the same time.

Gears could be either made form plastic in case of the cheap servo motors, or made of metal for the higher expensive motors that design for heavier work.
Now the way this motors work is receiving a feedback from a sensor positioned on a gear. This sensor that connected to a small circuit board, tells this circuit about the information of the servo rotation. Moreover, there is a signal received by the circuit and decoded to give the user the option about how far the servos should rotate, also determine to which direction to rotate to give the desired position.

To simplify the concept, imagine you instruct a friend for where you want him to go in a play field, you need to continuously ask your friend to move forward/ stop/ move backward in order to place him in the right position. Now, if you are a microprocessor and your friend is a simple motor then you need sometime to watch and give a command to place her in the right position this called a feedback loop. WHile if your friend were a servo motor, then all what you need to do is to say "go to 4.5 meters" then this would lead him directly to the right spot. 
This is why the servos is simple and useful to use for many robotic application since it has this automatic seeking behaviour, which mean you need only to tell what you wants to be done and the servos to the rest easily. 


###Control the position of a servomotor 

You will use the PiBot board to control the position of the servomotor's arm and set it to a specific angle. The PiBot send a series of pulses as a command to the servomotor. These pulses is a set of high and low voltage which stay high for a while then return low. 
For this experiment, you will send the desired angle using the PiBot serial monitor 

The figure bellow shows how the PiBot and the servo are wired together 
(fritzing figure here)

You need to connect the three wires of the servo motor to the three pins of the PiBot as shown in the figure above. 
The servo library include all the work with the servo motors, you will see this in this when you run the code bellow:

```
#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 

int servopin = 25;  // define a pin used to be connect to the control terminal of the servo. You could either use 20, 25, 26 

void setup() 
{ 
  myservo.attach(servopin);  // attaches the servo on pin called servopin which is =9 to the servo object 
  myservo.write(90);         //set the current servo angle to 90
  Serial.begin(9600);        //This command enable you to use the serial monitor to input values
  Serial.println("Enter the value of the angle in degree");   //This is a message instructs the user for what to do during the running time  

} 

void loop() 
{
 if(Serial.available()){   //if there is available command then this function will convert it to number 
 int angle=Serial.parseInt();   //parsInt converts into numbers
 myservo.write(angle);        // The new servo angle will be set here 
  } 
}

```

After you upload the sketch to the PiBot board, the motor arm should spin by its default value 90. To insert the desired value for the angle you need to open the serial monitor and you should be able to input values between 0-180. 
