#include <stdio.h>
#include <ctype.h>

void modify(char *s);

int main()
{
  char string[64];

  printf("Type some text: ");
  fgets(string,64,stdin);
  modify(string);
  puts("Here is your modified string:");
  printf("%s",string);

  return(0);
}

void modify(char *s)
{
  int x = 0;

  while(s[x])
  {
    s[x] = toupper(s[x]);
    if( s[x] == ' ')
        s[x] = '_';
    x++;
  }
}
