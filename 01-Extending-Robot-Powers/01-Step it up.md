###Steper Motors
### What is Stepper Motor
Each type of motor convert power, for example the electric motor responsible for converting the electricity into motion. Stepper motor converts the electricity into rotation. The stepper motors are a DC motors that rotates in a series of discrete steps - very precise angles- under the control of a precise motor controller. This controller can control in a very accurate way, how far and how fast the stepper motor will rotate . The motor controller sends the commands as pulses to the motor.

 For example, if some robot performs a turning operation then by counting the steps of the motor you could tell how much it has turned. For example, imagine you make an electric-powered robot to grab you a bottle of water, this robot arm moves in exact number of degree. You need to use an electric motor to make it turn when you switch the power on. The problem here is that there is no way to to know how much the angle of the motor(or arm) has moved because it depends on different reasons, from the power of the motor to even the direction of the wind. The issue is that the motor is moving in an arbitrary way that make it hard for a robot to do what you want exactly, your bottle is going to end up on the floor eventually. 

You can imagine now how useful the stepper motor could be due to its accuracy rather than spinning round by random amount. The stepper motors are also commonly used in 3D printers to position the paper accurately. 


#####How Stepper motor works

The stepper motor has two main parts; There is inside "rotor" of it that is turn by small and discrete steps under the effect of the outside "stator" that applies magnetic impulses to pull and push it around. 

 In a stepper motor, the rotor is a permanent magnet. The stator contains coils of wire(winding) act as electromagnets when an electrical current is passed through them. The rotor spins inside the stator and it is droved by alternating which the electromagnets coil has a current running through it.

 ![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/steppermotor.jpg)


The stepper motor controllers works differently, some work in an open loop while others work in a close loop. The deference between the two systems is that the open loop system send the power in a constant rate to the motor assuming the consistency of rotating field that the rotor follows. While in the closed system, use the feedback approach which mean testing the motor ability of bearing before sending more power, therefore the information is send back to the controller to make the necessary adjacent. Unlike the open loop system where no feedback used. 
The open loop system is simple and cheaper to use so it is commonly used in most of the application. Where in this application no need for a feedback but only call the motor. Whereas for some system where the motor needs to be vary to have best effectiveness. 

#####Advantage and Disadvantage of Stepper motor
The stepper motor has many advantage comparing to other type of motors. 
1- One main advantage is the accurate position. 
2- Positioning Stability. Stepper motor has an excellent response to the starting/stopping. 
3- In the motors with open loop system, the response is simple and less costly to control. 


At the other hand, stepper motor has the few disadvantage:
1- The extreme high speed might make it difficult to operate.


####Introduction to Libraries
In this part, we will discus the libraries in C and see how we can use it. So what is the Library? 

To develop the C program, and manage programs in computer we don't want to place all files into one place. But instead, we place a collection of related predefined functions into particular place, this place called a a header file. The C library is a a collections of a header files, and every header file is set of related functions.

Here is some examples:
-stdio.h : standard input/output library, header that defines various functions for performing input and output. Examples of these functions is the **print()** function. 

-string.h header defines various functions for manipulating arrays of characters.

and many others. See the figure bellow: 


 ![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/hf.jpg)

