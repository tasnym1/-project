#include <stdio.h>
#include <stdlib.h>
int swapping (int x,int y){
printf("the numbers before swapping inside the function: %d and %d\n",x,y);
int temp;
temp=x;
x=y;
y=temp;
  printf("the numbers after swapping inside the function: %d and %d\n", x ,y);
return x,y;

}
int main()
{
 int num1,num2;
 printf("enter the first number");
 scanf("%d",&num1);
  printf("enter the second number");
 scanf("%d",&num2);
 printf("the two number before swapping is %d and %d\n",num1,num2);
 swapping(num1,num2);
 printf("the two number after swapping is %d and %d\n",num1,num2);
    return 0;
}
