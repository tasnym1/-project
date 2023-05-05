#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[]={3,5,9,2,6,4,8,1,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,sorted;
    printf("array before sorting \n");
    for (i=0;i<size;i++){
     printf("array[%d]:%d \n",i,arr[i]);
    }
    do{
       sorted=1;
       for (i=0;i<size-1;i++)
       if (arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        sorted=0;
       }
    }while(sorted==0);

     printf("array after sorting \n");
    for (i=0;i<size;i++)
     printf("array[%d]:%d \n",i,arr[i]);


    return 0;
}
