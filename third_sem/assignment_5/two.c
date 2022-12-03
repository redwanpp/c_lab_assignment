//Decending short

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 6, 5, 7, 4, 9, 10, 8};

    int i, j, temp;
    
    printf("Before Shorting: ");
    for(i = 0; i < 10; i++) {
        printf("%d  ", arr[i]);
    }


    for(i = 0; i < 10; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n\nAfter Shorting: ");
    for(i = 0; i < 10; i++) {
        printf("%d  ", arr[i]);
    }

    return 0;
}