#include <stdio.h>
#include <stdbool.h>
#ifdef _WIN32
  #include <windows.h>
#endif
#include "tim3k.h"

int main(int argc, char const *argv[])
{
  clearCmd();

  bool LOOP = true;
  int timerSec = 0;

  do
  {
    printf("..> ");
    scanf("%d", &timerSec);

    if (timerSec == 0)
      break;

    for (;timerSec > 0;)
    {
      printf("%3d\r", timerSec);
      sleep(1000);
      timerSec--;
    }
    #ifdef _WIN32
      Beep(392,1000);
    #endif
  }
  while (LOOP == true);

  return 0;
}

void clearCmd()
{
  #ifdef _WIN32
  system("cls");
  #endif
}
