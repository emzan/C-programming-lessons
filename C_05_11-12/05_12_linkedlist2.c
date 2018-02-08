#include <stdio.h>
#include <stdlib.h>


int main() {

  struct stats{
    int account;
    float balance;
    struct stats *next;
  };
  struct stats *first;
  int a = 1;

  first = (struct stats *)malloc(sizeof(struct stats));
  if( first == NULL)
  {
    puts("Memory error");
    return(1);
  }

  first->account = a;
  printf("Account %05d, enter the balance: $",first->account);
  scanf("%f",&first->balance);
  first->next = (struct stats *)malloc(sizeof(struct stats));
  if( first->next == NULL)
  {
    puts("Memory error");
    return(1);
  }

  printf("Account %05d\tBalance: %.2f\n",
first->account,
first->balance);



return(0);


    }
