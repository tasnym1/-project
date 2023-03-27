#include <stdio.h>
#include <stdlib.h>
long factorial (int x){
if (x>=1)
    return x*factorial(x-1);
else
    return 1;
}
int main()
{
    int num;
    printf("enter the positive number");
    scanf("%d",&num);
    printf("factorial of %d=%d",num,factorial(num));
    return 0;
}
