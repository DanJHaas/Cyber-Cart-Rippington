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



// graphics headers
#include "common.h"
#include "ui.h"
// #include "gfx/images.h"
#include "gfx/effects.h"
#include "gfx/eye_blink.h"
// ui headers

// define animations
Display disp;
EyeBlink eb(&disp);

void setup() {
  Serial.begin(9600);
  BeginDisplay(&disp);
  
  disp.BScreen.setFont(u8g2_font_04b_03b_tr);
  disp.BScreen.setFontRefHeightExtendedText();
  disp.BScreen.setDrawColor(1);
  disp.BScreen.setFontPosTop();
  disp.BScreen.setFontDirection(0);

  disp.BScreen.setFontMode(true);
  disp.BScreen.setDrawColor(1);
}

void loop() {
    delay(1000);
    eb.play(0, 16);
    for (int i = 0; i < 200; i++)
    {
      createEffect(&disp, RANDOM_MAZE);
      delay(50);
    }
    
}