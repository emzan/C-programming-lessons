#include <stdio.h>

int main()
{
  struct weather {
    char day[10];
    float temp;
  };
  struct weather week[7] = {
    {"Sunday", 72.5 },
    {"Monday", 72.5 },
    {"Tuesday", 72.5 },
    {"Wednesday", 72.5 },
    {"Thursday", 72.5 },
    {"Friday", 72.5 },
    {"Saturday", 72.5 }
  };
  struct weather t;
  int x,outer,inner;


  puts("Unsorted Temperature Array:");
  for (x = 0; x < 7; x++)
  printf("%10s %.1f degrees\n",
week[x].day,
week[x].temp);


for (outer = 0; outer < 7; outer++)
{
  for (inner = outer+1; inner < 7; inner++)
  {
    if (week[outer].temp > week[inner].temp )
    {
      t = week[inner];
      week[inner] = week[outer];
      week[outer] = t;
    }
  }
}


puts("Sorted Temperature Array:");
for(x=0;x<7;x++)
  printf("%10s %.1f degrees\n",
week[x].day,
week[x].temp);

	return(0);
}
