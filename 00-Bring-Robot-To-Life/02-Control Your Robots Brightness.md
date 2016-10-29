In the previews tutorial, we showed how turn the power of an LED on and off in a digital way, meaning it has only two power status "on" and "off". But, what if you want to control in an analogy way for example how dim or bright the LED?


To do so, they key is to control the power which is sent to the LED, the more power the LED receives the brighter it is, while the less power it receives the dimmer it is. The technique used to achieve this called **Pulse-Width Modulation (PWM)***.

###Welcome to Pulse-Width Modulation (PWM)
Pulse-Width Modulation (PWM) is a smart way to convert the digital signal to analog signal. So you need to know first that the Microcontroller can output signal of only high (usually 5V) or low (ground 0V), and the analog volt can be 0v or 5v or any number in between. Notice that it doesn't have to be until 5v, it could 3.3v for example so it could be high at certain amount of time and goes down to a certain amount of time in a square way. We can change the proportion of time when the signal is high compared to the time when te signal is low over a consistent time interval. See figure 2.1 and 2.2  

[Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/pwm2.png)

[Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/pwm1.png)


The figures above shows some concepts we need to define here. First, when the signal is high this called "ON time". The percentage of time when that the digital signal is ON over the period of time is called **Duty cycle**. Say for example if the digital signal spends half of the time ON and the other half as OFF, then we say the duty cycle is 50% as shown in figure 2.2.

As a result, by by controlling the amount of time the pulse is high then you can control the sent power into the LED.

The PWM has many uses for example, to control the motors, dimming the LED, analog wave forms and more.

###Fade an LED with Pulse Width Modulation. 
Now, you will learn how to fade an LED on and off with Pulse Width Modulation using the built-in function "analogWrite". You will need to build the same circuit as the one in the blinking the LED lesson as shown in the figure bellow:

(a fritzing figure show the circut) 


####The Arduino sketch 

  In the last tutorial of the blink we used the pin number 13 sketch, in this sketch you are going to use pin number 9 instead, the reason is that pin number 9 is capable of Pulse Width Modulation (PWM) which is necessary to fade the LED. 
  In addition, the pin number 9 demands a resistor to control the amount of current coming into the LED. 

Now open a new file in the arduino and write down the following code: 

```
int led = 9;           // the pin that the LED is attached to
int brightness =144;   
// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}
// the loop routine runs over and over again forever
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
```
The first few lines of the code indicate the declarations of the variables to be used in the code. 
```
int led = 9;           // the pin that the LED is attached to
int brightness =144;
```
"Led" is the pin number where you attach the LED, "brightness" is the variable to be used to store the value of the current brightness of the LED. 

The next block of the code is the "setup" function. 
```
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}
```

To recall, setup function is use to initialize the variables, in this example we can set the "led" (on pin number 9)to be the output using the "pinMode" function. To remind you, "pinMode" takes only two arguments - the pin number and mood (input or output).

As you learnt before, "setup" runs only once and the code inside this function will only executed once by the Arduino.

In the "loop" function, you need to adjust the power output to the pin therefore just tell the build-in "analogWrite" which pin to modulate and the amount of power to supply. The "analogWrite" takes two arguments: pin number and value, you can use the pin number 3,4,5,9,10 and 11 to do the PWM on there output pins. 
Now run the code and notice we control how did we want the LED to be bright. 


In This lesson, we have came across a new names in C code, which they are **Data type** and **Variables**, so let's define them in a simple way.

##C - variables 
A variable like a container or storage that your program use it to keep the data. Each variable should given a unique name, and must have a type. The variable type indicates the type of data for example if your data is number then you need to use "integer" as type. 
Let's take one of the variables we used in the code: 

```
int led = 9;  

```
Here, "led" is the name of a variable of integer type. The variable is holding 9 in the above code.
In C programming, you should declare the variable before you can use it in the code. 
The name of the variable can contain letters, digits, and the underscore.

## C- Data type
Data type defines the size and type of data associated with variables and functions. 
The fundamental data types are:
1. integer type: 
The integers are numbers that can be positive and negatives but not decimal. The keyword "int" is used to declare this type of data, for example: 
```
int x;
```
"x" is variable type of integer.

2. Floating type: 
The floating type is a number but can be a real number too such as: 2.12, -9.3 etc. You declare it using the keyword "float". For example: 

```
float y;
```

3. Character type: 

The keyword **char** is used to define the variable that hold a character type. For example: 

```
char name;

```

Notice we can give/initialise values for the variables at the same type of declaring it.some examples bellow:

```
int x= 10;
float y=3.4;
char name ='S'
```


