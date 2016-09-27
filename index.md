###Intro
This index outlines the full Pibot physical computing course. The aim is that its possible to run this course over a peroiod of 8 weeks. 

Each step to robot mastery will have a physical **doing** element, a **knowledge** elements as well as a programming **skill** element. This way *physical computing*, *electronics* and *programming*, are learned at the same time. 


**Raghad Update the below structure with your new plans**

##1: Gaining Robot Powers. Bringing your Robot to Life

- 0 **Let there be light!** Wire up an LED and make it blink! *What is a MicroController?*
- 1 **What is speaking robot?** First steps in coding and speaking robot (aka learning programming in C)
- 2 **Controll your robots brightness** Introducing PWM and Analogue Electronics.
- 3 **Change the world** Let the code control a servo.  *Learn first machine signals*
- 4 **Super Powers** Do big things with little signals (aka Give your robot muscles). *Learn how to trigger from user input (e.g. a button)*
- 5 **Show us your moves** Learn to co-ordinate using functions. *translate motor actions into co-ordinated movement*

### Skill Element for Part 1

Think about how to introduce programming 1 step at a time each lesson should add something new.

- 00 Just upload an existing sketch and run it.  This is enough and shows and example and how code flows from Raspberry Pi to Micro.
- 01 Intro to coding in the IDE.  Learn by writing English and seeing that this will not work. Learn that programming has a very specific syntax. Learn what a variable is. Learn how to turn digital pins on and off.

C Learning structure:
- Basic Syntax (identifier, semicolon, comments, keywords )
- Data type
- Variables
- Operators ( ex: <, ==, != and so on)
- Decision making (if, if-else, switch)
- Loops 
- Functions
- Local, global variables
- Arrays 
- Strings



- 02 PWM. Lean how code can make calculations.  e.g. A = B + C 
- 03 Servos. Create a map of values to angles. 
- 04 DC Motors from Button press. Learn actions condtional on an event (e.g. button push)
- 05 Learn abrstaction through functions. Use movement functions (forward, back, turn left, turn right)  to delegate motor actions (power and time).





##2 Harmony. Co-ordinating and Extending Robot Powers 
**Not yet defined**   
- Incorporate the remaining hardware and sensors.( Stepper Motor, Neopixels & Ultrasound)
- Introduce Libraries and using code in a modular way.e.g.:
7. **Dancing** Creating code modules. *Use all your robot powers together*
- Learn the benefit of libraries and modular design. Turn previous lessons (leds, servos, DC motors) into libraries and make sketch that combines all of them into one. 
8. **Sensing the world** Measure and distance. *Filtering data to remove errors*
- Introduce the concept of feedback at a higher level using the serial interface. 
 Other Things to measuring Temperature -Potential Additions: -Measuring Humidity , -3 Axis accelerometers -IMU -Digital compass -GPS modules -Encoders


##3: Control is key. Change the world in the way that you want. 
**Not yet defined**  
--Clarify that microcontrollers are about measurement and control. Control systems are the heart of robotics.  Intoduce controll. Systems
9.**Let the robot take control** Make a program that keeps a given distance from an object.*Learn how to deal with fluctuations*
10.**Algorythims for Life** Learn PID control of the motors 

##4: Set your robot free! Automate and Remote Control
**Not yet defined** 
Covers how to create an API to the robot over serial.  This can then give all its control, command, measurement capabilities over to the Raspberry Pi.  The raspberry Pi can then use Python scripting.  This is a further demonstration of abstraction.  
