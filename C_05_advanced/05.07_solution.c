#include <stdio.h>
#include <string.h>

int main() 
{
	char *text = "I would like a snack.\n";
	int length,x;
	
	length = strlen(text);
	for(x=0;x<length;x++)
	{
		putchar(*(text+x));
	}

  return(0);
}
