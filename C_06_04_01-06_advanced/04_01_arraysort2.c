#include <stdio.h>

#define SIZE 10

void displayArray(int *a);

int main()
{
  int numbers[SIZE] = { 55, 44, 99, 11, 77, 22, 33, 88, 66, 0 };
  int outer,inner,temp;

/* Display the unsorted array */
  puts("Unsorted array:");
  displayArray(numbers);

/* Sort the array */
  for (outer = 0; outer < SIZE; outer++)
  for (inner = outer + 1; inner < SIZE; inner++)
  {
    if( numbers[outer] > numbers[inner])
    {
      temp = numbers[inner];
      numbers[inner] = numbers[outer];
      numbers[outer] = temp;
      displayArray(numbers);
    }
  }
}

void displayArray(int *a)
{ 
    int numbers[SIZE];
    int x;
    
    puts("Sorted array:");
    for (x = 0; x < SIZE; x++)
    printf(" %3d",numbers[x]);
    putchar('\n');
}
