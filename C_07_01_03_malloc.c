#include <stdio.h>

//And then we add the pointers in the whole code

int* return_me(int*);

int main()
{
    int x = 10;
    int *p = &x;
    printf("p: %d\n",p);
    
    x = return_me(x);
    printf("p: %d\n",p);

    return 0;
}

int* return_me(int *pint){
    return pint;
}
