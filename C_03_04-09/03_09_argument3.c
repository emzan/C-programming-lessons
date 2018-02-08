#include <stdio.h>

void bar(char c, int count);

int main ()
{
  int x;

  for (x = 0; x < 11; x++) {
    bar('*',x*2);
  }

  return(0);
}

void bar(char c, int count)
{
  int x;
  for ( x = 0; x < 11; x++) {
    putchar(c);
    putchar('\n');
  }
}
