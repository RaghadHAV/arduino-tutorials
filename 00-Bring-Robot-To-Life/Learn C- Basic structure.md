##Programming Section

The arduiono uses a subset of the C language. C is one of the most prolific and widely used languages in the world. The arduino subset of this makes it easier to learn the language quickly and start using it with physical computing.  All the code your learn for programming an arduino will form a solid basis for learning and extending your knowledge of C and many other related languages. The syntax and patterns of C have influenced many other languages including C++ python and JavaScript. This makes it quicker to learn other languages once you have become familiar with C. 

####What Kind Of Language is C?
 C is a compiled language that maps efficiently to machine instructions.  This ‘lower level’ language was first made to create the Unix Operating System in the early 1970’s.  IT is well suited for replacing applications that before would have used assembly language.  It is widely used for coding operating systems, as well as various applications for a wide range of systems, from supercomputers to small embedded systems. It has been around since the 70’s and is very standardized and stable.  Most of the code and applications on your Raspberry Pi, including Linux has been written in C. 

## C- basic structure

##C - variables 
A variable like a container or storage that your program use it to keep the data. Each variable should given a unique name, and must have a type. The variable type indicates the type of data for example if your data is number then you need to use "integer" as type. 
Let's take one of the variables we used in the Blink the Led example: 
```
int led = 9;  

```
Here, "led" is the name of a variable of integer type. The variable is holding 9 in the above code.
In C programming, you should declare the variable before you can use it in the code. 
The name of the variable can contain letters, digits, and the underscore.

## C- Data type
Data type defines the size and type of data associated with variables and functions. 
The fundamental data types are:
1- integer type: 
The integers are numbers that can be positive and negatives but not decimal. The keyword "int" is used to declare this type of data, for example: 
```
int x;
```
"x" is variable type of integer.
2- Floating type: 
The floating type is a number but can be a real number too such as: 2.12, -9.3 etc. You declare it using the keyword "float". For example: 

```
float y;
```

3- Character type: 

The keyword **char** is used to define the variable that hold a character type. For example: 

```
char name;

```

Notice we can give/initialise values for the variables at the same type of declaring it. For example:

```
int x= 10;
float y=3.4;
char name ='S'
```



