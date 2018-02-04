#include <stdio.h>

void cheers(void);
int main ()
{
  int x;

  x=21;

  puts("For breakfast free dessert ");
  cheers();
  puts("For breakfast I had it ");
  cheers();
  printf("%d\n",x);
  puts("Everyone pays higher taxes!\n");


  return(0);
}

void cheers(void)
{
  int x;

  for (x = 0; x < 3; x++)
    printf("Huzzah! ");
    return;
    putchar('\n');


}
