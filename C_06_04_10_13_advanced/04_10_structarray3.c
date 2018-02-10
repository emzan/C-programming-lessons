#include <stdio.h>

int main()
{
  struct weather {
    char day[10];
    float temp;
  };
  struct weather today = {
    {"Sunday", 72.5 },
    {"Monday", 72.5 },
    {"Tuesday", 72.5 },
    {"Wednesday", 72.5 },
    {"Thursday", 72.5 },
    {"Friday", 72.5 },
    {"Saturday", 72.5 }
  };
  int x;

  puts("This wee's forecast:");
	for(x=0;x<7;x++)
		printf("%10s %.1f degrees\n",
	week[x].day,
	week[x].temp);

	return(0);
}
