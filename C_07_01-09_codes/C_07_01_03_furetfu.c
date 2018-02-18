#include <stdio.h>

//And then we add the pointers in the whole code

int* return_me(int*);

int main()
{
    int x = 10;
    int *p = &x;
    printf("p: %p\n",p);
    
    p = return_me(p);
    printf("p: %p\n",p);

    return 0;
}

int* return_me(int *pint){
    return pint;
}
