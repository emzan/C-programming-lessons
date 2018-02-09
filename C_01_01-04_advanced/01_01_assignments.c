#include <stdio.h>

int main()
{
  int v = 0;

  int a;

  printf("v equals %d\n",v);


  v = v + 20;
  printf("v + 20 equals %d\n", v);


  v = v - 2;
  printf("v - 2 equals %d\n", v);


  v = v / 3;
  printf("v / 3 equals %d\n", v);


  v = v * 4;
  printf("v * 4 equals %d\n", v);


  v = v % 7;
  printf("v %% 7 equals %d\n", v);

  return (0);

}
