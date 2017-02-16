###PID control
In some systems, such as the heater system, 
PID stands for three elements "proportional, integral, derivative." Each element of these performs a specific task and effect the system differently.

In most of the PID controller, these elements work by system commands and feedbacks from the object (such as the motors) which they control and could be connected to micro-controller for more processing. Most of the motors use PID control due to its simplicity and precise control. 
![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/PID.png)

In the figure above, the feedback loop used to give information about the desired speed to drive a dc motor, in result it used proportional integral and derivative method to minimise the resulted error and reach the desired output. 
Imagine if you're taking a shower, and you turn the water on then you physically test if it is too hot or too cold so you can adjust the temperature of the water until you get the desired one. You physically acts like the feedback to see what the suitable temperature you would want in order to take that shower. 
As you can notice, the PID control needs to know first how much to adjust the heat to achieve a desired temperature change
**PROPORTIONAL CONTROL** 
This part of the PID controller test the volume of the error, it interacts in a proportional way. 
In our example above, the propositional measure and control the amount of change in the current time (persent). Like saying, it is too hot lets turn the cold water, or too cold add the hot water
**INTEGRAL CONTROL**   
This element attempt to correct the small errors called offset. When combined with the proportional control loop  them we could have a precise positioning closer to the target position.

**DERIVATIVE CONTROL**
Derivative control can predict the future errors based on noticing the past error slops in the system. having this control enables more stability in the system and increase the control of it.
### Motor position PID Control 
This lesson will show the power of PID control to 
