#include <stdio.h>
#include <stdlib.h>

int main()
{ //the largest number
    int a,b,c, large;
    printf("ENTER THE THREE NUMBERS");
    scanf("  %d%d%d",&a,&b,&c);
   large=a>b? (a>c? a:c):(b>c? b:c);
   printf("THE LARGEST NUMBER IS  %d",large);
    return 0;
}
