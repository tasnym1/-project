#include <stdio.h>
#include <stdlib.h>

int main()
{ //find power of number
    int x,y,result ;
    printf("enter the number: \n" );
    scanf("%d",&x);
    printf("enter the exponent: \n ");
    scanf("%d",&y);
    result =pow (x,y);
    printf("%d ^ %d = %d",x,y,result);
    return 0;
}

