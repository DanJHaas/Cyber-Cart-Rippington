/*
 * ▲
 * │ ██████╗ ███████╗███████╗ ██████╗██╗   ██╗██████╗ ███████╗
 * │ ██╔══██╗██╔════╝██╔════╝██╔════╝██║   ██║██╔══██╗██╔════╝
 * │ ██║  ██║█████╗  █████╗  ██║     ██║   ██║██████╔╝█████╗  
 * │ ██║  ██║██╔══╝  ██╔══╝  ██║     ██║   ██║██╔══██╗██╔══╝  
 * │ ██████╔╝███████╗██║     ╚██████╗╚██████╔╝██████╔╝███████╗
 * │ ╚═════╝ ╚══════╝╚═╝      ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝
 * ╞═════════════════════════════════════════════════════════►
 * │ File Name: main
 * │ Project: src
 * │ Date: Thu Nov 02 2023
 * │ Comment:
 * ▼
 */

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "media_sources.h"

// define animations
EyeBlink eb(&display);


void setup() {
  Serial.begin(9600);
  display.begin();

  pinMode(2, INPUT_PULLDOWN);
  pinMode(3, INPUT_PULLDOWN);
  pinMode(4, INPUT_PULLDOWN);
  // display.setFont(u8g2_font_6x10_tf);
  display.setFont(u8g2_font_04b_03b_tr);
  display.setFontRefHeightExtendedText();
  display.setDrawColor(1);
  display.setFontPosTop();
  display.setFontDirection(0);

  display.setFontMode(true);
  display.setDrawColor(1);

  for (int j = 0; j < 13; j++)
  {
    for (int i = 0; i < 26; i++)
    {
      // display.drawStr(i * 5, j * 5, random(1, 10) > 4 ? "/" : random(1, 10) > 4 ? "|": "\\");
    }
  }

  // for(;;){}
  display.setBitmapMode(false);
  display.drawXBM(0, 16, 128, 32, &*DefCube);
  display.sendBuffer();
  delay(250);
}

void loop() {
    delay(1000);

    eb.play(0, 16);

}