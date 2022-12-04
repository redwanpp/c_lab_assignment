//code for insert two element at last of the array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, *arr2;
    int i, n, m;
    
    printf("Enter the size of primary size of your array: ");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int)*n);
    m = n+2;
    arr2 = (int *)malloc(sizeof(int)*m);

    printf("Enter element of your array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }

    printf("Before insert your elements of your array are:\n\t");
    for(i = 0; i < n; i++) {
        printf("%d  ", *(arr+i));
    }

    for(i = 0 ; i < n ; i++){
        *(arr2 + i) = *(arr + i);
    }

    for(i = n; i < m; i++) {
        printf("\nEnter a element for insert last: ");
        scanf("%d", arr2+i);
    }

    printf("\nAfter insert two element at last you array is:\n\t");
    for(i = 0; i < m; i++) {
        printf("%d  ", *(arr2 + i));
    }

    return 0;
}