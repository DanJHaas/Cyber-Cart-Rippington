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


// screen include
#include "common.h"

// ui headers
#include "ui/ui.h"

// graphics headers
#include "gfx/effects.h"
#include "gfx/eye_blink.h"

// define screen stuff
Display disp;
EyeBlink eb(&disp);
Effect eff(&disp);

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
      eff.createEffect(RANDOM_MAZE);
      delay(50);
    }
    
}