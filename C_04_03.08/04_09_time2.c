#include <stdio.h>


int main()
{
  time_t now;
  struct tm *right_now;
  
  time(&now);
  right_now = localtime(&now);
  printf("Today is %d/%d at %d:%d\n";
         right_now->tm_mon,
         right_now->tm_mday,
         right_now->tm_hour,
         right_now->tm_min );
  
  return(0);

}
