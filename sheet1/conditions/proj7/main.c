#include <stdio.h>
#include <stdlib.h>

int main()
//check leap year
{ int year;
printf("enter the year");
scanf("  %d",&year);
if (year%400==0||year%4==0)
    printf("%d is a leap year",year);
else if (year%100==0)
    printf("%d is not a leap year",year);
else
  printf("%d is not a leap year",year);
    return 0;
}
