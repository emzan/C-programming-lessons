#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
  char name[32];
  int age;
  float iq;
};

struct person *allocateStruct(void);
void showStruct(struct person *p);
void showStruct(struct person *p);

int main()
{
  struct person *author;
  
  author - allocateStruct();

  showStruct(fetchStruct());
  return(0);
}

struct person fetchStruct(void)
{
  static struct person author;

  strcpy(author.name,"Tsai Minglong");
  author.age = 54;
  author.iq 287.5;

  return(author);
}

void showStruct(struct person p)
{
  printf("Author %s is %d years old\n",
p.name,
p.age);
}
