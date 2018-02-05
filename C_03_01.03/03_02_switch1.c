#include <stdio.h>

int main ()
{
  char a;

  printf("Your choice (1,2,3): ");
  scanf("%c", &a);

  switch (a) {
    case '1':
    puts("Eccellent choice!");
    break;

    case '2':
    puts("This is the most common choice.");
    break;

    case '3':
    puts("I question your judgement.");
    break;

    default:
    puts("This is not a choice.");

  }


  return(0);

}
