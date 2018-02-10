#include <stdio.h>
#include <atdlib.h>
#include <string.h>

void *generate(int *a);

int main()
{
  int x;
  int array[10];

  puts("Here are 10 random numbers:");
  generate(array);
  for (x = 0; x < 10; x++)
  printf(" %3d",array[x]);
  putchar('\n');

  return(0);
}

void generate(int *a)
{
  int x;

  srand((unsigned)time(NULL));
  for (x = 0; x < 10; x++)
  a[x] = rand() % 100 + 1;
}
