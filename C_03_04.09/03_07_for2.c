#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int column, r;

  srand((unsigned)time(NULL));

  for ( column = 0; column < 10; column++){
r = rand();
    printf("%2d\t",r % 100);
}

putchar('\n');

  return(0);
}
