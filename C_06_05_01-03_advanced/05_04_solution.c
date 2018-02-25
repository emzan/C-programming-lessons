#include <stdio.h>

int main()
{
	int f,*fptr;
	
	fptr = &f;
	*fptr = 89;
	printf("Here is the value: %d\n",*fptr);
	printf("Here is the value plus 1: %d\n",++*fptr);

	return(0);
}
