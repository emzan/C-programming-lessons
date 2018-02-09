#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("There were %d command line arguments\n",argc);
  printf("This program is named '%s'\n",argv[0]);

  return (0);
}
