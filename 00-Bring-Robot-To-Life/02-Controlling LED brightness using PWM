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
Every time inside the loop the brightness value will be increased by 5 until we have the highest bright of the LED.

So, Do you think there is something wrong missing? Can you guess what? 
Yes, so far the brightness goes up to reach its maximum value and never fade. Therefore we need a way to decrease the brightness down when it reaches its limit, the "If-statement" is used used here to test if the value of the brightness is either 0 or 250 then the condition is true and the code in curly bracket will execute. 

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


