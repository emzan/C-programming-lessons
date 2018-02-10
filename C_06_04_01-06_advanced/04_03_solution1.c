#include <stdio.h>
#include <string.h>

#define SIZE 64

int main()
{
  char string[SIZE];
  int length,outer,inner,temp;


  printf("Type some text: ");
  fgets(string,SIZE,stdin);
  length = strlen(string);


  for (outer = 0; outer < length; outer++)
  for(inner=outer+1;inner<length;inner++)
  {
    if( string[outer] > string[inner])
    {
      temp = string[inner];
      string[inner] = string[outer];
      string[outer] = temp;
    }
  }


  puts("Sorted string:");
  printf("%s\n",string);

  return (0);
}
