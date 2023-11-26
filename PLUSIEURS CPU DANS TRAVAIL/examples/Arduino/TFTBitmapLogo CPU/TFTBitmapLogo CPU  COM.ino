/*

 Arduino TFT Bitmap Logo example

 This example reads an image file from a micro-SD card
 and draws it on the screen, at random locations.

 In this sketch, the Arduino logo is read from a micro-SD card.
 There is a .bmp file included with this sketch.
 - open the sketch folder (Ctrl-K or Cmd-K)
 - copy the "arduino.bmp" file to a micro-SD
 - put the SD into the SD slot of the Arduino TFT module.

 This example code is in the public domain.

 Created 19 April 2013 by Enrico Gueli

 http://www.arduino.cc/en/Tutorial/TFTBitmapLogo

 */

// include the necessary libraries
#include <SPI.h>
#include <SD.h>
#include <TFT.h>  // Arduino LCD library

// pin definition for the Uno
#define sd_cs  4
#define lcd_cs 10
#define dc     9
#define rst    8

// pin definition for the Leonardo
//#define sd_cs  8
//#define lcd_cs 7
//#define dc     0
//#define rst    1

TFT TFTscreen = TFT(lcd_cs, dc, rst);

// this variable represents the image to be drawn on screen
PImage logo;

int val;
void setup() {
  // initialize the GLCD and show a message
  // asking the user to open the serial line
  

  // initialize the serial port: it will be used to
  // print some diagnostic info
  Serial.begin(9600);
Serial1.begin(9600);
  while (!Serial) {
    // wait for serial port to connect. Needed for native USB port only
  }

  // clear the GLCD screen before starting
 
  // try to access the SD card. If that fails (e.g.
  // no card present), the setup process will stop.
  
 
  

  // initialize and clear the GLCD screen


  // now that the SD card can be access, try to load the
  // image file.
Serial.write(0);
val=Serial.read();
switch(val){
case 0:
  logo = Serial.read();
break;
default:
break;

}

}
 
}

void loop() {
  // don't do anything if the image wasn't loaded correctly.
  if (logo.isValid() == false) {
    return;
  }

 

  // get a random location where to draw the image.
  // To avoid the image to be draw outside the screen,
  // take into account the image size.
 

  // draw the image to the screen
 if (!logo.isValid()) {
    

Serial1.write(0);
  Serial1.write(logo);
  }
  // wait a little bit before drawing again
  delay(1500);
}
