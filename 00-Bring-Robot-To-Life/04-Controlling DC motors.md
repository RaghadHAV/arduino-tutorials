##Controlling a DC Motor 
You have seen so far how to use the Arduino to control the LED by turn it on/off and control its brightness using the PWD. How about trying to control the Motor? 

The motor you will work on is called DC motor so what is the DC motor?

###What is the DC motor 
The Direct current or DC is the easiest use and the most common type of motor. DC has two leads one is positive and the other one is negative. The motors generally need too much current out put from the digital pin of the Raspberry pi or the Arduino. Therefore, a resistors is used to control this current and allow only a small amount of the current from the Arduino or the raspberry to control a bigger current to the motor.


##Using PWM to control the speed
The Pulse-width modulation(PWM) approach that you have used before to control the brightness can be used also to control the speed of the motors. 

####The Hardware 
We are going to use the breadboard to show how to build the circuit to control a motor:

1- An arduino board
2- Transistor
3- Diode 
4- resistor
5- small 6v DC motor
6- 6v (4*AA) battery box
7- breadboard
8- wires

The breadboard is shown in the figure bellow:

 ![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/dcmotor.png)

The transistor needs to be placed correctly in the breadboard where the flat side with the writing on should be in the-right hand side. The diode also needs to be positioned correctly where the one of its end with the stripe should face the top of the board.

The ground(GND) connection (represents as the yellow wire in the figure) provides the zero voltage for the Arduino and the breadboard, while the control connection (represents as the blue wire ) will be responsible for turning the motor on and off depends on the availabe volatge weather it will be over 2V to keeps the motor on or bellow to turn it off.
Now the sketch you will use is similar to the one you used to control the LED in a previews tutorial, which is the one bellow:
```
void setup()
{
  pinMode(13, OUTPUT);
  
}

void loop() 
{
  digitalWrite(13,High);
  delay(500);
  digitalWrite(13,LOW);
}

```
Try to do by yourself to do more experiments for example, changing the values of the delay functions and notice the motor response to that.
It is worth mentioning that You could do this experiments in both Arduino and raspberry pi. 



