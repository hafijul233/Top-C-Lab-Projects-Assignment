#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//for Sleep and System function

int main()
{
  while(1){
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

    printf("\t\tCurrent Date : %d/ %d/ %d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\t\tCurrent Time : %d: %d: %d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    Sleep(900);// program sleep for 0.9 sec to lower process load
    system("cls");//clear console screen to give animated view
  }
    return 0;
}
