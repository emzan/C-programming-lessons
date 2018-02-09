#include <stdio.h>

int main()
{
  float f;

  printf("Enter a value: ");
  scanf("%f",&f);

  printf("You input the value %.1f\n",f);
  f *= 5;
  printf("That value multiplied by 5 is %.1f\n",f);
  f /= 3;
  printf("Divide that value by 3 and you get %.1f\n",f);

  return(0);
}
