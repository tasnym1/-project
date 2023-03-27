#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of the array: \n");
    int size;
    scanf("%d",&size);
    int arr[size], f_arr[size];
    printf("enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("the elements of your array are: ");
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
