#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[]={3,5,9,2,6,4,8,1,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    printf("array before sorting \n");
    for (i=0;i<size;i++){
     printf("array[%d]:%d \n",i,arr[i]);
    }

    for (i=0;i<size-1;i++){
        for(j=i+1;j<size;j++)
            if (arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
    } printf("array after sorting \n");
    for (i=0;i<size;i++)
     printf("array[%d]:%d \n",i,arr[i]);


    return 0;
}
