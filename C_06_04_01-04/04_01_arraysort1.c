#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
  int numbers[SIZE];
  int x,outer,inner,temp;


  srand((unsigned)time(NULL));
  for (x = 0; x < SIZE; x++)
  numbers[x] = rand() % 100 + 1;


  puts("Unsorted array:");
  for (x = 0; x < SIZE; x++)
  printf(" %3d",numbers[x]);
  putchar('\n');


  for (outer = 0; outer < count; outer++)
  for (inner = 0; inner < count; inner++)
  {
    if( number[outer] > numbers[inner])
    {
      temp = numbers[inner];
      numbers[inner] = numbers[outer];
      numbers[outer] = temp;
    }
  }


  puts("Sorted array:");
  for (x = 0; x < SIZE; x++)
  printf(" %3d",numbers[x]);
  putchar('\n');

  return (0);
}
