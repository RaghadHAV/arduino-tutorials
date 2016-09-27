In the previews tutorial, we showed how to control the brightness of an LED in a digital way, meaning it has only two power status "on" and "off". But, what if you want to control in an analogy way for example how dim or bright the LED ?

To do so, they key is to control the power which is sent to the LED, the more power the LED receives the brighter it is, while the less power it receives the dimmer it is. The technique used to achieve this called Pulse-Width Modulation (PWM). The LED produced a high and low pulses, and by controlling the amount of time the pulse is high then you can control the sent power into the LED.

###Fade an LED with Pulse Width Modulation. 
Now, you will learn how to fade an LED on and off with Pulse Width Modulation using the built-in function "analogWrite".

### What do you need?  
1- A breadboard 
2- LED 
3- Resistor
4- 2 wires

####How to build the circuit?

One important note to make here, make sure you don't power the circuit while you work to avoid damaging the component in case of a wrong connection made. 

1- Connect the short leg of the the LED to the Ground GND pin of the Arduino. You can use the wire to make the connection between the GND and the breadboard as shown in Figure ----

2- Connect either leg of the resistor and connect it to the pin number 9.

3- Connect the long leg of the LED with the other leg of the resistor.


####The Arduino sketch 
  In the last tutorial of the blink we used the pin number 13 sketch, in tbis sketch you are going to use pin number 9 instead, the reason is that pin number 9 is cableble of Pulse Width Modulation (PWM) which is necessary to fade the LED. 
  In addition, the pin number 9 demands a resistor to control the amount of current coming into the LED. 


  "We need a figure to show the circuit maybe?!!1"

  Now open a new file in the arduino and write down the follwing code: 

```
int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
 
// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}
 
// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);
 
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
 
  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
```

The first few lines of the code indicate the declarations of the variables to be used in the code. 
```
int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

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

In the "loop" function, you need to adjust the power output to the pin therefore just tell the build-in "analogWrite" which pin to modulate and the amount of power to supply. The "analogWrite" takes two arguments: pin number and value, you can use the pin number 3,4,5,9,10 and 11 to do the PWM on there output pins. Value is the scaled from 0-255, 0 as the lowest power( makes the LED dark) and 255 as the highest power. Initially, in the code we start with 0 as the LED value then inside the loop you do an increment to increase the LED brightness this states in the line : 

```
brightness = brightness + fadeAmount;
```
Firstly, the "brightness" value is 0, and the value of "fadeAmount" add to it and saved back to the "brightness", now the new value of "brightness" is 5.

```
(0)=(0)+(5);  << This shows how much are the values through the first time of the loop
```
Every time inside the loop the brightness value will be increased by 5 until we have the highest bright of the LED.

Now, Do you think there is something wrong? Can you guess what? 
Yes, so far the brightness goes up to reach its maximum value and never fade. Therefore we need a way to decrease the brightness down when it reaches its limit, the "If-statement" is used used here to test if the value of the brightness is either 0 or 250 then the condition is true and the code in curly bracket will execute. 
So first let's look at the "If statement". 

 ##Welcome to "if statement"
 If statement allows you to control whether the program should enters a specific section of code or not depending on some condition/s. Easily, if the condition met, then it does something. If the condition is not met, it does nothing.

 Let's take an example here:

```
if (you win the race )
{
  get_gold_medal();
}
```
What you type inside the parenthesis after the word "IF" is the condition, while inside the curly braces you put the code you want it to be execute if the condition is met. On this basis, in the example above you can not get a gold medal if you don't win the race. 

The "If statement" structure is as follow 

```
 if ( statement is TRUE )
 {
    Execute this code
 }
```

Now let's back to the Fade the LED example. 

```
if (brightness == 0 || brightness == 255) {
 
fadeAmount = -fadeAmount ;
 
}
```

What this code is actually do is assigning the "fadeAmount" variable to its negative version. This mean each time through the loop the value of the brightness that is used to increase by 5 now it will decrease by 5 and the LED start to dim. 

Now, can you guess what will happen when the brightness value continue to decrease until it reach the value of 0? 
Think about what will happen with the "If condition".
One last think to mention, Since the microcontroller works very fast this would make the LED flashes very quickly and therefore you will not be able probably to notice it. To solve the problem it's better to have a delay to slow down the operation. 


### What to try by yourself:
1- Change the value of the "fadeAmount" that has been declared at the top of the sketch and see what could happen

2- Change the delay time and see what could happens

3-  Do you think you can fade multiple LEDs at the same time? You can change the code slightly to try this. 


##If statement

As explained before, "If" checks a specific condition if it is true or not in the following structure:
```
 if ( statement is TRUE )
 {
    Execute this code
 }
```
Example:
 
```
 if ( 5 < someVariable){
    do something here
 }
```

In this example, the program tests if the value 5 is less than a specific variable, if this condition met then the code inside the curly bracket with be execute otherwise the program skips over the code.
The comparison operators can be used to express the condition, these are:

 a == b (equal)
 a != b (not equal)
 a <  b (a is less than b)  
 a >  b (a is greater than b) 
 a <= b (a is less than or equal to b) 
 a >= b (b is greater than or equal to b)

Beware of using the double sign of "=" represent the comparison between two variables, because using single sign represents the assignment operator. The example bellow explain this difference: 

1-if (a==4)  // a is equal to 4

2-if(a=4)    // 4 is assigned to the variable a


##Else statement
Sometimes when the condition in "if statement" is false, it is good idea to have another code to be executed instead. The "else" statement offers this possibility by allowing the program to execute the code that comes after the "if statement" code section. The "else" statement look like this:

```
if ( TRUE ) {
    // Execute these statements if TRUE 
}
else {
    // Execute these statements if FALSE 
}
```
##For loop
the previews examples, you have seen how to use "loop" function in order to execute multiple commands, "for" works in the same concept to allow the program to repeatedly execute block of code."For" loop is one of the most useful type of loop and it's offer more controlling over your program. For loop consists of three parts as the following:

```
for ( variable initialization; condition; variable update ) {
  Code to execute while the condition is true
}
```
The first part is the "intercalation" which happens only one at the start of the loop, then the "condition" which is tell that while the conditional expression is true the loop should continue to repeat itself. The third part is the "update " is the change that could happen to the variable. 
Let's see how to use it in an example, and we are going to edit the LED fading using the PWM pin to use the for loop. 


```
int led = 9;

void setup()
{
   pinMode(led, OUTPUT);
}

void loop()
{
   for (int i=0; i <= 255; i++){
      analogWrite(led, i);
      delay(10);
   } 
}
```

The variable "i" set to 0, check if "i" is less or equal to 255, if true then the two lines of code inside the curly bracket are execute it. Then the incrementing for "i" is happens only after the code in the loop is run. Try now to write it in and run the code for a better understanding. 

##While loop 
"While" is another type of loop and can give the same goal as "for" loop. "While" loops will loop continuously to execute the code, until the expression inside its parenthesis () is no longer true. There must be an update variable that keep changing, otherwise the while loop will never exit. The structure for the " while " loop is as follow:

```
while(expression){
  // statement(s)
}
```
Example:

```
int led = 9;

void setup()
{
   pinMode(led, OUTPUT);
}
int i=0;

void loop()
{
  while(i<=255){
  analogWrite(led, i);
      delay(10);
      i++;
}
}
```

