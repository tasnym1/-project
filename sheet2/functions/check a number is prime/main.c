#include <stdio.h>
#include <stdlib.h>
int prime (int x){
for(int i=2;i<x;i++){
    if (x%i==0)
     return 0;
}
    return 1;

}
int main()
{ int num;
printf("enter the number");
scanf("%d",&num);
if (prime(num)==1)
 printf("the number is prime");
if (prime(num)==0)
 printf("the number is not prime ");
    return 0;
}
