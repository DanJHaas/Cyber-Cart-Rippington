/**************************************************************************
 This is an example for our Monochrome OLEDs based on SSD1306 drivers

 Pick one up today in the adafruit shop!
 ------> http://www.adafruit.com/category/63_98

 This example is for a 128x32 pixel display using I2C to communicate
 3 pins are required to interface (two I2C and one reset).

 Adafruit invests time and resources providing this open
 source code, please support Adafruit and open-source
 hardware by purchasing products from Adafruit!

 Written by Limor Fried/Ladyada for Adafruit Industries,
 with contributions from the open source community.
 BSD license, check license.txt for more information
 All text above, and the splash screen below must be
 included in any redistribution.
 **************************************************************************/
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#include "media_sources.h"
EyeBlink eb;

void giveLine(void);

int count;
void setup() {
  Serial.begin(9600);
  display.begin();

  pinMode(2, INPUT_PULLDOWN);
  pinMode(3, INPUT_PULLDOWN);
  pinMode(4, INPUT_PULLDOWN);

  display.setFont(u8x8_font_amstrad_cpc_extended_f);    
  display.setCursor(5,5);

}

void loop() {
  display.clearBuffer();
  if(digitalRead(2))
  {
    eb.play();
    // display.drawXBMP(0, 0, 128, 32, &*DefCube);
    display.sendBuffer();
  }else{
    display.drawTriangle(2,2,64,64,110,20);
    display.sendBuffer();
  }
  // nunchuck1.readData();
  // display.clearBuffer();
  
  // display.printf("Hi: %d :: %d", nunchuck1.values[1], nunchuck1.values[2]);
}


void giveLine()
{
  for(;;)
  {

    delay(1000);

  }

}