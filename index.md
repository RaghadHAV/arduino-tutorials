###Intro
This index outlines the full Pibot physical computing course. The aim is that its possible to run this course over a peroiod of 8 weeks. 

Each step to robot mastery will have a physical **doing** element (D), a **knowledge** elements (K) as well as a programming **skill** element (P). This way *physical computing* and *programming* are learned at the same time. 

- Physical Computing. Laying out and connection of physical components, learning how they work and how to control them.
- Coding. Using the arduino IDE to learn C and programming.
- IT & Robotics Learn key theory and information technology aspects to the lesson.


##0 Bringing your Robot to Life

- 0 **Let there be light!** (D)Wire up an LED and make it blink! *(K)What is a MicroController?* How to run an existing program **(P)robots are controlled from text based programs.** 
- 1 **Turn YOUR light on!** (D) Turn your own light on with your own program. *(K) What is programming? what is C?*  Introduction to the Arduino IDE. What is speaking robot? First steps in coding and speaking robot (aka learning programming in C)  **(P) Learn syntax, comments and error messages** 
- 2 **Controll your brightness** (D) Control Brightness. *(K)Introducing PWM, Analogue Electronics and binary bits.* Simple **(P) Variables**
- 3 **Change the world** Let the code control a servo.  *Learn first machine signals and actuators* simple **(P) Learn basic calculations A+B =C** 
- 4 **Super Powers** Do big things with little signals (aka Give your robot muscles). *Learn how to trigger from user input (e.g. a button)*  Introduce bottons.  **(P) If Else statement ** 


##1 Extending Robot Powers 
- 0 **Make Sense** (D) Measure the world with Ultrasound *(K) Sensors, and the role of sensors in control systems)* First AI system. Filtering data to remove errors? **(P) Functions (forward and backwards) used with If Else)**
- 1 **Step it up!** (D) Control Stepper Motors *(K) How Steppers work* Not sure what else to add here? **(P) Introduction to Libraries**
- 2 **Control Pixels** (D) Control Stepper Motors *(K)How light is made up of RGB. How single wire interfaces work* Not sure what else to add here? **(P) Introduction to Arrays and more advanced libraries**
- 3 **Dancing** (D) Control multiple hardware *(K) Abraction and modules* Use all your robot powers together **(P) Turn previous lessons (leds, servos, DC motors) into libraries and make sketch that combines all of them into one** 
- 4 **Taking Control** (D) Introduce the concept of feedback at a higher level using the serial interface to control through Keyboard presses. 


##3: Control is key. Change the world in the way that you want. 
**Not yet defined**  
--Clarify that microcontrollers are about measurement and control. Control systems are the heart of robotics.  Intoduce controll. Systems
9.**Let the robot take control** Make a program that keeps a given distance from an object.*Learn how to deal with fluctuations*
10.**Algorythims for Life** Learn PID control of the motors 

##4: Set your robot free! Automate and Remote Control
**Not yet defined** 
Covers how to create an API to the robot over serial.  This can then give all its control, command, measurement capabilities over to the Raspberry Pi.  The raspberry Pi can then use Python scripting.  This is a further demonstration of abstraction.  

 Other Things to measuring Temperature -Potential Additions: -Measuring Humidity , -3 Axis accelerometers -IMU -Digital compass -GPS modules -Encoders


