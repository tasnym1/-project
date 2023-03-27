#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,sum=0;
    printf("enter number of col or row\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             scanf("%d",&arr[i][j]);
            }
    }
      for(int i=0;i<n;i++){
          sum+=arr[i][i];
      }
      printf("sum of main diagonal=%d",sum);
    return 0;
}
