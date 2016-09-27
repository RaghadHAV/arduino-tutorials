You have seen so far a small lines of code in an arduino sketch and you can manage it easily in case there would be a problem with it. But at some point you need to write a long code inside the "loop" or "setup" functions and the program would be very complicated and hard to read, write or maintain it. Therefore, a function is an easy way to organize your code. 

######What is a function  
A function is a group of code lines that perform a specific task and can be called any where in your program. You already worked with a function such as "digitalWrite" and "PinMode", you just called it in your sketch but not bothered to build it because it is already built-in functions, its bodies are written somewhere else separately. In this lesson you will learn to build it all by yourself. 

The function consist of a function " deceleration" this is where you tell the program about your function name, a return type and parameters. 
And the other part is called function "definition" where you write the body of your function.
To explain these parts more clearly let's look at the structure:

```
return_type function_name( parameter list ) {
   body of the function
}
```
* Return type: a function usually retune a value and the return type is the type of this returned value. Some function don't return any values and in this case its type called ** void**  
* Function name: It is the name of your function. Usually every function performs an action, so the name of it preferred to make clear what it does. 
* Parameters: it is like a place-holder for some value to be used by the function. Lets assume you want to write a blink LED function where you want the LED blinks 5 times. When you call the function you pass the value 5 to that function, then the function use a parameter to hold this value.

* Function Body: The function body is the place where you write the collections of the code belong to that function.
##### Example: 
You can modify the Blink the LED example to include a function and let's named it "LED_Blinking"

```
int led = 13;

void setup()
{
   pinMode(led, OUTPUT);
}

void loop()
{
   LED_Blinking();
}
void LED_Blinking()
{
digitalWrite(led,High);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
}
```
What we done here is to move the lines of code where the for the LED flashing to new function of their own. By calling the name of the function anywhere of your program you can make the LED blink, in our example we made the LED_Blinking function call inside the loop function. This example of the function does not take any parameter therefore the function parenthesis is empty " LED_Blinking()", also it does not return any value so the function type is void. 

Lets try to modify this function to include a parameters: 

```
 int led =13;
void setup()
{
   pinMode(led, OUTPUT);
}

void loop()
{
   int delayPeriod=500;
   LED_Blinking(delayPeriod);
}
void LED_Blinking(int d)
{
  digitalWrite(led,High);
  delay(d);
  digitalWrite(led,LOW);
  delay(d);
}
```
In this example notice when we called the function we supplied a parameter inside the parenthesis. So we modify the delay period value to be known only inside the loop function, but when we use it in a different function we need to pass it as parameters. So, delayPeriod vaiable is equal to 500, this value will be passed to the variable "d" that acts as the holder for this value that going to be used inside the function body.

##### Type of variables

##Arrays
