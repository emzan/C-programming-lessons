#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a_size = 10;
  int new_a_size =0;
  int *a = malloc(a_size * sizeof(int));
  if(a == NULL)
  {
    fprintf(stderr,"Memory allocating error!\n");
    exit(1);
  }

  for(int i=0; i<a_size; i++){
    a[i] = i*10;
  }

  for (int i = 0; i < a_size; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }

  int *tmp = NULL;
  new_a_size = a_size * 2;

  printf("Reallocating a!\n");
  tmp = realloc(a,new_a_size*sizeof(int));

  if(tmp == NULL)
  {
    fprintf(stderr,"Error reallocating a!\n");
    exit(1);
  }
  printf("Done.\n");

  a = tmp;

  for (int i = 0; i < new_a_size; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }

  free(a);

   return (0);
}
//goodbye
