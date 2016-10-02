You have seen so far a small lines of code in an arduino sketch and you can manage it easily in case there would be a problem with it. But at some point you need to write a long code inside the "loop" or "setup" functions and the program would be very complicated and hard to read, write or maintain it. Therefore, a function is an easy way to organize your code. 

######What is a function  
A function is a group of code lines that perform a specific task and can be called any where in your program. You already worked with a function such as "digitalWrite" and "PinMode", you just called it in your sketch but not bothered to build it because it is already built-in functions, its bodies are written somewhere else separately. In this lesson you will learn to build it all by yourself. 

The function consist of a function **deceleration** this is where you tell the program about your function name, a return type and parameters. 
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
In this example notice when we called the function we supplied a parameter inside the parenthesis. So we modify the delay period value to be known only inside the loop function, but when we use it in a different function we need to pass it as parameters. So, delayPeriod variable is equal to 500, this value will be passed to the variable "d" that acts as the holder for this value that going to be used inside the function body.

An example of a function that does return a value :

```
int Double ( int num) {
Return num*2;
} 
```
From the above you can see int being used to state that the function both takes as interger called num as a parameter and also returns an integer. Don’t worry if you don’t know yet what an integer is as this will be explained in step3. 

See the Arduino Language Reference for further functions.

Questions :
What does the isDigit() function do:
A)
B)
C)

What unit of time does the delay() function take as a parameter?

A) seconds 
B) milli seconds
C) hours 




##Arrays
You have seen so far the variables that store single value in arduino memory. Sometimes you need to use very big data and if you need to store it each with single variable, this would require using too many variables. For example if you want to create many LED, you would normally create different variables individuality for each LED as follow:

int Led1=9;
int led2=10;
int led3=11;
int led4=12; 
int led5=12;
and so on.
But, in C programming this is inefficient way so instead arrays came out. Array can be defined as a single storage for a list of values and you can access to any value using its position in the array.
To create an array in arduino memory, you use following structure:

```
data_type array_name[array_size];
For example:
int led [5];
```
Using the [] after the variable name tell that you are using arrays. So you simply indicates that you want to create a list of five places to store the values for the led. Yet, you still did not intricate what are these values, we just know they are of type integer and they are five values. 
Now let's have a look on how do we create this list contacting the values:

```
int led[4]={9,10,11,12,13}
```
You need to use the curly braces to write the values, each separated with commas. We can access them by writing the name of the variable and the position number written inside the square bracket like this:

```
led [0]
``` 
In this example, you are accessing the value in the first position which is "9". How is that? 
Let's first explain how the indexing work, arrays in C are zero-based, which means that if we defined an array of size 5, then the array cells 0 through 4 are used. location [5] is not used.

```
int led[4]={9,10,11,12,13}
           [0][1][2][3][4]
           array elements
```

Now let's write a complete example:

```

void setup()
{
   int ledNumber;
   for(ledNumber=9;ledNumber<=13;ledNumber++)
   pinMode(ledNumber, OUTPUT);
}

void loop()
{
   int led[4]={9,10,11,12,13};
    digitalWrite(le[0],HIGH);
}
```

So in this step "digitalWrite(le[0],HIGH)" you actually indicating the led in the position (0) be be blinked, which is in the array the led number (9). Now, try to modify the example to make all the led number turn on one by one.

However, although the number of array elements are 5 so you can access the locations between 0-4, but if you tried to access the location 5 or any number out of the range, you may get a value but this in fact will cause a fatal error during program execution. 


