#include <stdio.h>
#include <stdlib.h>

void print_int_array(int *b, int b_size)
{
  for(int i=0;i<b_size;i++)
  {
    printf("[%d]: %d\n",i,b[i]);
  }
}

int* create_int_array(int lenght)
{
  int *a = malloc(lenght*sizeof(int));
  if(a==NULL)
  {
    return a;
  }

  for (int i = 0; i < lenght; i++) {
    a[i] = i*1000;
  }
  return a;
}

void double_int_array(int *a, int a_size)
{
  for (int i = 0; i < a_size; i++)
  {
    a[i] *=2;
  }
}

int main()
{
  int a_size = 10;
  int *a = create_int_array(a_size);
  print_int_array(a,a_size);
  printf("Doubling array\n");
  double_int_array(a,a_size);
  print_int_array(a,a_size);

  free(a);

   return (0);
}
//goodbye
