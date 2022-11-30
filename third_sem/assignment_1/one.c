//code for insert two element at last of the array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, m;
    
    printf("Enter the size of primary size of your array: ");
    scanf("%d", &n);
    int arr[n];
    m = n+2;
    int arr2[2];

    printf("Enter element of your array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before insert your elements of your array are:\n\t");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }

    for(i = 0 ; i < n ; i++){
        arr2[i] = arr[i];
    }

    for(i = n; i < m+1; i++) {
        printf("\nEnter a element for isert last: ");
        scanf("%d", &arr2[i]);
    }

    printf("\nAfter insert two element at last you array is:\n\t");
    for(i = 0; i < m+1; i++) {
        printf("%d  ", arr2[i]);
    }

    return 0;
}