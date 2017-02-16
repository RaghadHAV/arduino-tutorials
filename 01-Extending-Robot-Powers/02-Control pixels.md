### Introduction to RGB pixel
To get involve with the design and control the RGB pixels, you need first to understand how all works and what does it required to create working RGB pixel system. 
The RGB pixel consists of three Light Emitting Diodes(LEDs) that has the three primary colours or LEDs Red,Green, and Blue built inside, this where the name RGB came from. RGB pixels look like a small lights that is controlled by a small circuit board, by varying the the intensity of the these three colours Red, Green, Blue then you could make a light with any desired colour.  

Think about a picture as you use it, it is made of many very small RGB pixels which can be lit in any colour. 

The ability to control and vary the intensity of each pixel, gives advantages of using the RGB pixels for a lighting display. These pixels are located so close to each other so that they appear as one single source of light to the eye.

#####Powering Up Pixels
The RGB pixels need a lot of power but the built-in voltage in Arduino board can feeds only few number of pixels therefore, an external source of power will be needed. However, the required external power will mainly depends on number of lights you need to use but the bigger power supply is the better. 

###Arrays
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
