#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
           found=1;
            printf("%d found at position %d\n", search, i+1);
            break;
        }
    }
        if (found=0)
            printf("%d not found in the array\n", search);


    return 0;
}


