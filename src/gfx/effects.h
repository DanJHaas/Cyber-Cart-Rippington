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

class Effect
{
  private:
    Display* disp;

  public:
    Effect(Display* disp)
    {
      this->disp = disp;
    };
    void createEffect(int Effect);

  private:
    void RandomMaze();

};



#endif