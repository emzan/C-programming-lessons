#include <stdio.h>
#include <string.h>
//commmits
int main()
{
	struct weather{
		char day[10];
		float temp;
	};
	struct weather week[7];
	int x;

	strcpy(week[0].day,"Sunday");
	week[0].temp = 72.5;
	strcpy(week[1].day,"Monday");
	week[1].temp = 75.4;
	strcpy(week[2].day,"Tuesday");
	week[2].temp = 67.3;
	strcpy(week[3].day,"Wednesday");
	week[3].temp = 82.1;
	strcpy(week[4].day,"Thursday");
	week[4].temp = 52.5;
	strcpy(week[5].day,"Friday");
	week[5].temp = 92.5;
	strcpy(week[6].day,"Saturday");
	week[6].temp = 92.8;

	puts("This wee's forecast:");
	for(x=0;x<7;x++)
		printf("%10s %.1f degrees\n",
	week[x].day,
	week[x].temp);

	return(0);
}
