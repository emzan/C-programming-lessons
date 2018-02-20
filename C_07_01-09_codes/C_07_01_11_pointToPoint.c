#include <stdio.h>
#include <stdlib.h>

int* create_int_array(int len, int multiplier) {
  int *a = malloc(len*sizeof(int));

  for (int i = 0; i < len; i++) {
    a[i] = i*multiplier;
  }
  return a;
}

int main()
{
  int array_len = 10;
  int *a = create_int_array(array_len,10);
  int *b = create_int_array(array_len,100);
  int *c = create_int_array(array_len,1000);

  int** array_pointer = malloc(3*sizeof(int*));
  array_pointer[0] = a;
  array_pointer[1] = b;
  array_pointer[2] = c;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < array_len; j++) {
      printf("array_pointer[%d][%d]: %d\n",i,j,array_pointer[i][j]);
    }
  }

  free(array_pointer);
  free(a);
  free(b);
  free(c);

  return (0);
}
//goodluck!
