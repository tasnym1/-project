#include <stdio.h>
#include <stdlib.h>

int main()
{ //find factorial of a number
    int num ,i;
int result=1;
printf("enter the number");
scanf("  %d",&num);
 if (num>=0){
   for (i=1;i<=num;++i) {
    result *=i;
   }
printf(" factorial of %d = %d",num,result);
 }
 else
    printf("error");
    return 0;
}
