#include <stdio.h>

struct person{
  char name[32];
  int age;
};

struct person fillStructure(void);
void showStructure(struct person p);

int main()
{
  showStructure(fillStructure());

  return(0);
}

struct person fillStructure(void)
{
  static struct person p;

  printf("Type your first name: ");
  scanf("%s",p.name);
  printf("Enter your age: ");
  scanf("%d",&p.age);

  return(p);
}

void showStructure(struct person p)
{
  printf("%s is %d years old.\n",
         p.name,
         p.age);
}
