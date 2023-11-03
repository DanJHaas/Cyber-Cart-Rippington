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

// list of Screen effects
enum Effects
{
  RANDOM_MAZE

};

// creates a screen wide effect
void createEffect(int Effect);

void RandomMaze();



void createEffect(int Effect)
{
  switch (Effect)
  {
  case RANDOM_MAZE:
    RandomMaze();
    break;
  
  default:
    break;
  }
}

void RandomMaze()
{
  for (int j = 0; j < 13; j++)
  {
    for (int i = 0; i < 26; i++)
    {
      BScreen.drawStr(i * 5, j * 5, random(1, 10) > 4 ? "/" : random(1, 10) > 4 ? "|": "\\");
    }
  }
}

#endif