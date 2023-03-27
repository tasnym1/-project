#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
   int temp;
    temp = *x;
    *x= *y;
    *y= temp;

}

int main()
{
   int num1, num2;

   printf("Enter the value of two numbers\n");
   scanf("%d%d",&num1,&num2);

   printf("Before Swapping\n num1 = %d\n num2 = %d\n", num1,num2);

   swap( &num1,&num2);

   printf("After Swapping\n num1 = %d\n num2 = %d\n",num1,num2 );

   return 0;
}


