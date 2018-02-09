#include <stdio.h>

int main()
{
  int a;

  printf("Type an integer: ");
  scanf("%d",&a);
  printf("You typed %.1f.\n",(float)a);

  return (0);
}
