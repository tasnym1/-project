#include <stdio.h>
#include <stdlib.h>

int main()
{// calculator
int num1 , num2 ;
char x;
float result;
printf("enter the two numbers");
scanf ("%d %d", &num1 ,&num2);
printf(" which operation + ,- ,* ,/ \n");
scanf(" %c",&x);
switch (x)
{
  case '+':
   result= num1 + num2 ;
   break;
  case '-':
   result= num1 - num2;
   break;
  case '*':
   result= num1 * num2 ;
   break;
  case '/':
     if (num2 != 0)
      result=(float)num1 / (float)num2 ;
     else
      printf ("error \n");
    break;
  default:
    printf("enter the true operation");
}
printf(" the result =%f" ,result);


    return 0;
}
