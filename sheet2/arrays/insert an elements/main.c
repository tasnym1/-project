#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("enter the number of elements");
scanf("  %d",&n);
int x[n];
printf("enter the element of array");
 for(int i=0;i<n;i++){
    scanf("  %d",&x[i]);
}
printf("the elements are:");
 for(int i=0;i<n;i++){
 printf("%d \t",x[i]);
 }
    return 0;
}
