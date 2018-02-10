#include <stdio.h>
#include <atdlib.h>
#include <string.h>

#define SIZE 64

int compare(const void *a, const void *b);

int main()
{
  char string[SIZE];
  int length;


  printf("Type some text: ");
  fgets(string,SIZE,stdin);
  length = strlen(string);


  qsort(string,length,sizeof(char),compare);


  puts("Sorted string:");
  printf("%s\n",string);

  return (0);
}

int compare(const void *a, const void *b)
{
  return( *(char *)a - *(char *)b );
}
