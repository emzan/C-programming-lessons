#include <stdio.h>

int iscap(int ch);

int main()
{
  int c;
  
  do
  {
    c = getchar();
    if(iscap(c))
      putchar(c);
  }
  while( c != '\n');
  
  return(0);
}

int iscap(int ch)
{


}
