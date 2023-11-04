/*
 * ▲
 * │ ██████╗ ███████╗███████╗ ██████╗██╗   ██╗██████╗ ███████╗
 * │ ██╔══██╗██╔════╝██╔════╝██╔════╝██║   ██║██╔══██╗██╔════╝
 * │ ██║  ██║█████╗  █████╗  ██║     ██║   ██║██████╔╝█████╗  
 * │ ██║  ██║██╔══╝  ██╔══╝  ██║     ██║   ██║██╔══██╗██╔══╝  
 * │ ██████╔╝███████╗██║     ╚██████╗╚██████╔╝██████╔╝███████╗
 * │ ╚═════╝ ╚══════╝╚═╝      ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝
 * ╞═════════════════════════════════════════════════════════►
 * │ File Name: effects
 * │ Project: animations
 * │ Date: Thu Nov 02 2023
 * │ Comment:
 * ▼
 */
#ifndef CCR_DISPLAY_EFFECTS_
#define CCR_DISPLAY_EFFECTS_
//TODO: add screen animations for future use, fancy patterns, fractals, hardcoded animations <- saves on memory
#include "common.h"
// list of Screen effects
enum Effects
{
  RANDOM_MAZE

};

// creates a screen wide effect
void createEffect(Display* disp, int Effect);

void RandomMaze(Display* disp);


#endif