#include <stdio.h>



int main() {

  char pokey;
  char *p;
  
  pokey = 'Q';
  p = &pokey;
  

  printf("The address of pokey is %p\n", &pokey);
  printf("The address of pokey is %c\n", pokey);

  printf("The address of pokey is %p\n", p);  
  printf("The address of pokey is %c\n", *p);

  return(0);


}
