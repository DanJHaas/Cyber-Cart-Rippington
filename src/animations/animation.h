/*
 * ▲
 * │ ██████╗ ███████╗███████╗ ██████╗██╗   ██╗██████╗ ███████╗
 * │ ██╔══██╗██╔════╝██╔════╝██╔════╝██║   ██║██╔══██╗██╔════╝
 * │ ██║  ██║█████╗  █████╗  ██║     ██║   ██║██████╔╝█████╗  
 * │ ██║  ██║██╔══╝  ██╔══╝  ██║     ██║   ██║██╔══██╗██╔══╝  
 * │ ██████╔╝███████╗██║     ╚██████╗╚██████╔╝██████╔╝███████╗
 * │ ╚═════╝ ╚══════╝╚═╝      ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝
 * ╞═════════════════════════════════════════════════════════►
 * │ File Name: animation
 * │ Project: animations
 * │ Date: Thu Oct 26 2023
 * │ Comment:
 * ▼
 */
#ifndef LCDCN_ANIMATION_GLUE_
#define LCDCN_ANIMATION_GLUE_

// #define SSD1306_NO_SPLASH
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// #define OLED_RESET    4 // Reset pin # (or -1 if sharing Arduino reset pin)
// #define SCREEN_ADDRESS 0x3c
// #include <U8x8lib.h>
#include <U8g2lib.h>
#include <vector>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, /* reset=*/U8X8_PIN_NONE);

#endif