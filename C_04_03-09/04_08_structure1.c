#include <stdio.h>

int main()
{
  struct record{
    int account;
    float balance;
  };
  struct record my_bank;

  my_bank.account = 123456;
  my_bank.balance = 6543.21;
  printf("In account %d I have %.2f\n",my_bank.account,my_bank.balance);

  return(0);
}
