## User input 
### push button 
We have talked about only the output signal so far, in this lesson we are going to talk about the input. **push button** is one of the simplest and most common digital input. 

![Arduino Tutorials](https://github.com/RaghadHAV/arduino-tutorials/blob/master/Images/pushbutton.png)

####How push button works? 
The way push button work is when the user press it, the voltage goes LOW and accordingly, the arduino read it and react. 

####The circuit 
1x Breadboard
1x PiBot
1x LED
7x Jumper Wires
2x Push Buttons

(Put a fritzing digram here)


####The code 
Open a new arduino sketch, copy and paste the following code:

```
int LED =12;
int Button;
int buttonState;
void setup()
{
	  pinMode(LED,OUTPUT);
	  pinMode(Button,INPUT);
}
void loop()
{
	buttonState=digitalRead(Button);
	if(buttonState==HIGH)
	  {
		digitalWrite(LED,HIGH);
	  }
	else
	  {
		DigitalWrite(LED,LOW);
	  }
}
```

#### Code explaining

```
pinMode(Button,INPUT); 
```
Because the digital pin can do writing or reading, therefore you should tell the arduino in advance which direction you are going to. 

```
buttonState=digitalRead(Button);
```

**digitalRead** this function used to read and return the digital input which is either HIGH or LOW depends if the voltages is 5V or 0v. The returned value will be stored at the variable (buttonState).

####Welcome to "if statement"
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

In the **push button** example,
```
if(buttonState==HIGH)
	  {
		digitalWrite(LED,HIGH);
	  }
```	  

The "if statement" simply compares the value of variable "buttonreading" and check if it is equal to LOW or HIGH to perform an action based of the result. 

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


Now back to the push button example,  if this condition met then the code inside the curly bracket with be execute otherwise the program skips over the code and jump to "else" 
#####Else statement
Sometimes when the condition in "if statement" is false, it is good idea to have another code to be executed instead. The "else" statement offers this possibility by allowing the program to execute the code that comes after the "if statement" code section. The "else" statement look like this:

```
if ( TRUE ) {
    // Execute these statements if TRUE 
}
else {
    // Execute these statements if FALSE 
}
```

In our example, if the "buttonstate" variable is not pressed the program will jump to the else statement and cause the LED to be LOW

```
else
	  {
		DigitalWrite(LED,LOW);
	  }
```

#### Real world application

Some of the push buttons are similar to the buttons of the video games controllers. 



