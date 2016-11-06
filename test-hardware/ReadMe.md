#Testing the PiBot hardware
The PiBot needs testing.  This is first to validate the prototype as working. It can also be used to check that all the associated PiBot hardware is working as well.

The tests include tests from both the Raspberry Pi and the integrated arduino.

##Arduino Testing using the Arduino IDE
This tests all the arduino functionality of the system and covers:

1. booloader (check that the bootlader can be burt to the micro) PASSED 
2. t-serial upload (Check that Pi can upload a sketch by serial interface) PASSED
3. t-blink (test that the IDE can run the blink sketch with the built in LED D13)
4. t-digitalPins (test all the pins digitally, as pins turn high or low a voltmeter is used to check the actual value)
5. t-PWM (test PWM on D5 and D6) 
6. t-Interupts (test the interupt functionality from the motor encoders)
7. t-pixels (test the neopixels)
8. t-motors (test the motors left and right)
9. t-ultrasound (test ultrasound value and display through serial console)
10. t-AnalogRead (read an analogue value from A1(15),A2(16),A3(17)

##Testing Proceedure
The board is tested by uploading the various sketches and then pysically testing or recording the results. A simple voltmeter is used to detect the voltage (or lack of voltage) on various pins.  A **signal anaylser** can be used to test more detailed signals (e.g. the frequency and duty cycle of a PWM signal for example.For this I am using the [bitscope micro] (http://www.bitscope.com/product/BS05/)

##Raspberry Pi Tests
All tests for the Raspberry Pi are found in the The [V2 github tests folder](https://github.com/pi-bot/.v2/tree/master/tests). These were first used to test robot hardware via the **Serial API**.  I'll add **core-tests** to test the native PI io on the PiBot board.
