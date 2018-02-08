#include <stdio.h>

int main()
{

  char input[15];

  printf("Instructions: ");
  fgets(input, 64, stdin);
  puts("Thank You! Here are your Instructions:");
  puts(input);

  return (0);

}
