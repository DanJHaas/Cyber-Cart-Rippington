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

void Effect::createEffect(int Effect)
{
  switch (Effect)
  {
  case RANDOM_MAZE:
    this->RandomMaze();
    break;
  
  default:
    break;
  }
}

void Effect::RandomMaze()
{
  this->disp->BScreen.clearBuffer();
  for (int j = 0; j < 13; j++)
  {
    for (int i = 0; i < 26; i++)
    {
      this->disp->BScreen.drawStr(i * 5, j * 5, random(1, 10) > 4 ? "/" : random(1, 10) > 4 ? "|": "\\");
    }
  }
  this->disp->BScreen.sendBuffer();
}