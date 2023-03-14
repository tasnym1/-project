#include <stdio.h>
#include <stdlib.h>

int main()
{//swapping two numbers
int num1,num2 ,x;
printf("enter the first number ");
scanf("  %d",&num1);
printf("enter the second number ");
scanf("  %d",&num2);
x= num1;
num1=num2 ;
num2=x;
printf("the first number after swapping is %d \n",num1);
printf("the second number after swapping is %d",num2);
    return 0;
}
