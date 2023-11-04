/*
 * ▲
 * │ ██████╗ ███████╗███████╗ ██████╗██╗   ██╗██████╗ ███████╗
 * │ ██╔══██╗██╔════╝██╔════╝██╔════╝██║   ██║██╔══██╗██╔════╝
 * │ ██║  ██║█████╗  █████╗  ██║     ██║   ██║██████╔╝█████╗  
 * │ ██║  ██║██╔══╝  ██╔══╝  ██║     ██║   ██║██╔══██╗██╔══╝  
 * │ ██████╔╝███████╗██║     ╚██████╗╚██████╔╝██████╔╝███████╗
 * │ ╚═════╝ ╚══════╝╚═╝      ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝
 * ╞═════════════════════════════════════════════════════════►
 * │ File Name: ui
 * │ Project: src
 * │ Date: Fri Nov 03 2023
 * │ Comment:
 * ▼
 */
#include <Wire.h>
#include "ui.h"
#include "../gfx/images.h"


void BootIntro(Display* disp)
{
  disp->BScreen.setBitmapMode(false);
  disp->BScreen.drawXBM(0, 16, 128, 32, &*DefCube);
  disp->BScreen.sendBuffer();
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

void BeginDisplay(Display* disp)
{
  SetupPins();
  disp->BScreen.begin();
  BootIntro(disp);
}