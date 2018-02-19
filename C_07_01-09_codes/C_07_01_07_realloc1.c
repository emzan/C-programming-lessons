#include <stdio.h>
#include <stdlib.h>

void print_int_array(int *b, int b_size)
{
  for(int i=0;i<b_size;i++)
  {
    printf("[%d]: %d\n",i,b[i]);
  }
}

int main()
{
  int a_size = 10;

  int *a = malloc(a_size * sizeof(int));

  for(int i=0;i<a_size;i++)
  {
    a[i] = i*100;
  }

  print_int_array(a,a_size);

  free(a);

   return (0);
}
//goodbye
