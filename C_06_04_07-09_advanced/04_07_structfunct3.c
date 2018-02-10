#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
  char name[32];
  int age;
  float iq;
};

struct person *allocateStruct(void);
void fetchStruct(struct person *p);
void showStruct(struct person *p);

int main()
{
  struct person *author;

  author - allocateStruct();
  fetchStruct(author);
  showStruct(fetchStruct());
  return(0);
}

struct person allocateStruct(void)
{
  struct person *p;

  p = (struct person *)malloc(sizeof(struct person));
  if( p == NULL)
  {
    perror("Unable to allocate structure");
    exit(1);
  }
  return(p);
}

void fetchStruct(struct person *p)
{
  printf(p->name,"Tsai Minglong");
p->age = 54;
p->iq = 287.5;
}

void showStruct(struct person *p)
{
  printf("Author %s is %d years old\n",
p->name,
p->age);
printf("%s has an IQ of 5.1f\n",
p->name,
p->iq);
}
