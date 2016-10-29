## Let there be light

### What is a MicroController?

Microcontrollers are complete computer systems-on-a-chip designed for measurement, command, and control. 


### Create a Blinking LED on breadboard 
 In this first step we'll place an illuminating LED into a circuit and use the microcontroller to control it.


What do you need?  
1- PiBot board
2- A breadboard 
3- LED 
4- Resistor
5- 2 wires

First, make sure you don't power the circuit while you work to avoid damaging the component in case of a wrong connection made. 

Take out your breadboard and connect it to the PiBot IO board. (See fig. 1). Now take a red LED and 1k Resistor and create a circuit like the one shown in fig. 2. The Positive Voltage Rail is connected to oneside of the resistor and the PiBot IO 's ground pin is connected to the tail pin of the LED. Please note that the LED needs to be connected the right way round for it to work. It has one leg longer than the other and this needs to connect to the positive side ( the side on the same rail as the resistor).


## How the breadboard work?
A breaboard allows you to make electronic circuits with out soldering or making any permanent connections. It is ideal for making prototypes and testing designs. Underneath the cover of the breadboard are a number of metal strips that the pins of devices slot into. These strips run vertically and all holes along the same strip are connected electrically. By placing components in the breadboard we can create electrical circuits that work.



###Upload the first sketch
In this first lesson, you will learn how to use the arduino IDE for writing the code and upload it to the PiBot board . When you open the arduino application at the first you will see an empty sketch, to open one of the existing examples go to the file menu and then open Blink example. See the figure below: 

fig-1 the blink sketch

By now your PiBot should be plugged in into the computer, before transferring the code to your board, the arduino program needs to know what board you're using and which serial you are connecting to. They are PiBot board and serial See figure .. 
 
fig ---- 

To upload the sketch, press the **UPLOAD** icon in the toolbar, this will take short time for compiling and transferring the code to the board. If everything is correct you will see the message  **Done Uploading** at the bottom of the window (see figure). After uploading the code to the PiBot board, you should see the LED start blinking 


## Inner Workings of a Microcontroller.  
The PiBot uses an arduino compatible microcontoller chip (model 328P). There are kinds of microcontrollers and the 328P is perhaps the best and most widely used microcontroller for getting started with.    


Fig 1_2 block diagram of the system on Chip (SOC)


The CPI (Central Processing Unit)  processes and runs the code given to it. It takes instructions stored in the flash memory and will also read and write to the Random Access Memory. The processor also controls all the IO determining each pins state, configuration, and changes. 
The EEPROM memory is non-volatile and is preserved between powering the system on or off or any resets. 
Clock 
The small silver rectangular component is a quartz chrystal oscillillator.  This cycles 16 million times per second giving the processors frequency of 16 MHz. In each of the 16 million ticks the computer can perform a single operation.

Reset switch. 
The last piece of hardware to note is the microcontrollers reselt switch. This sends a pulse on the microcontrollers reset pin and is used to reset the system. 

Finally the Micronctrollers Serial bus is connected directly to the serial output of the Raspberry Pi.  This means that both system are directly connected over the high-speed  serial connection.


