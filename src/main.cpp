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

#include <SPI.h>
#include <vector>
#include <U8g2lib.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C BScreen(U8G2_R0, /* reset=*/U8X8_PIN_NONE);

// graphics headers
#include "gfx/effects.h"
#include "gfx/images.h"
#include "gfx/eye_blink.h"

// ui headers
#include "ui/startup.h"

// define animations
EyeBlink eb;


void BootIntro()
{
  BScreen.setBitmapMode(false);
  BScreen.drawXBM(0, 16, 128, 32, &*DefCube);
  BScreen.sendBuffer();
  delay(BOOT_DELAY);
}

void SetupPins()
{
  pinMode(UP, INPUT_PULLDOWN);
  pinMode(DOWN, INPUT_PULLDOWN);
  pinMode(LEFT, INPUT_PULLDOWN);
  pinMode(RIGHT, INPUT_PULLDOWN);
  pinMode(SELECT, INPUT_PULLDOWN);
}

void BeginDisplay()
{
  SetupPins();
  BScreen.begin();
  BootIntro();
}



void setup() {
  Serial.begin(9600);
  BeginDisplay();

  BScreen.setFont(u8g2_font_04b_03b_tr);
  BScreen.setFontRefHeightExtendedText();
  BScreen.setDrawColor(1);
  BScreen.setFontPosTop();
  BScreen.setFontDirection(0);

  BScreen.setFontMode(true);
  BScreen.setDrawColor(1);
}

void loop() {
    delay(1000);
    eb.play(0, 16);
    createEffect(RANDOM_MAZE);
    delay(500);
}