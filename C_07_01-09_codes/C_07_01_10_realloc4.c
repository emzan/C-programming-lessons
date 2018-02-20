#include <stdio.h>
#include <stdlib.h>

void change_int_array(int* a, int a_size) {
  for (int i = 0; i < a_size; i++) {
    a[i] = i*100;
  }
}
int main()
{
  int a[10];

  int *ap = (int*)&a;
  change_int_array(ap,10);

  for (int i = 0; i < 10; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }

  return (0);
}
//goodluck!
