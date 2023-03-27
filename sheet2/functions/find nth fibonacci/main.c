#include <stdio.h>
#include <stdlib.h>
int fibonacci (int x){
if (x==0)
    return 0;
else if (x==1)
    return 1;
else
    return (fibonacci(x-1)+fibonacci(x-2));
}
int main()
{ int num;
printf("enter the positive number");
scanf("%d",&num);
printf("the fibonacci of %d = %d",num,fibonacci(num));

    return 0;
}
