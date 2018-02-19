#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a_size = 11;
  int new_a_size =0;
  int *a = NULL;

  a = malloc(a_size * sizeof(int));
  if(a == NULL)
  {
    fprintf(stderr,"Memory allocating error!\n");
    exit(1);
  }

  for(int i=0; i<a_size; i++){
    a[i] = i*12;
  }

  for (int i = 0; i < a_size; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }

  int *tmp = NULL;
  new_a_size = a_size * 2;

  tmp = realloc(a,new_a_size*sizeof(int));

  if(tmp == NULL)
  {
    fprintf(stderr,"Memory reallocating error!\n");
    exit(1);
  }

  a = tmp;

  for (int i = 0; i < new_a_size; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }

  free(a);

   return (0);
}
//goodbye
