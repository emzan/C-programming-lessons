#include <stdio.h>



int main() {


    char *string = "I'm jut a normal string.\n";
    char *ptr;

    ptr = string;

    while (*ptr) {
      putchar(*ptr);
      ptr++;
    }

  return(0);


}
