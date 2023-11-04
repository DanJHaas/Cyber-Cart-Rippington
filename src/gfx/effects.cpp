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
 * │ Project: gfx
 * │ Date: Sat Nov 04 2023
 * │ Comment:
 * ▼
 */

#include "effects.h"

void createEffect(Display* disp, int Effect)
{
  switch (Effect)
  {
  case RANDOM_MAZE:
    RandomMaze(disp);
    break;
  
  default:
    break;
  }
}

void RandomMaze(Display* disp)
{
  disp->BScreen.clearBuffer();
  for (int j = 0; j < 13; j++)
  {
    for (int i = 0; i < 26; i++)
    {
      disp->BScreen.drawStr(i * 5, j * 5, random(1, 10) > 4 ? "/" : random(1, 10) > 4 ? "|": "\\");
    }
  }
  disp->BScreen.sendBuffer();
}