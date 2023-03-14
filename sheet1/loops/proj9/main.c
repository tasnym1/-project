#include <stdio.h>
#include <stdlib.h>

int main()
{//multiplication table
    int n,i;
    int multi;
    printf("enter the number");
   scanf("  %d",&n);
   for( i=0;i<=12;i++){
    multi=n*i;
   printf("%d * %d = %d\n ",n,i,multi);
   }
    return 0;
}
