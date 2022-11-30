//finde and two element form an array

#include <stdio.h>

int SIZE = 10;
int arr[10];

void insert();
void delete(int item);
void print();

int main() {
    int item1;
    printf("Enter 10 uniq numbers:\n");
    insert();

    printf("\nBefore delete:\n");
    print();

    printf("Enter two data for delete:\n");
    scanf("%d", &item1);
    delete(item1);
    
    printf("Enter two data for delete:\n");
    scanf("%d", &item1);
    delete(item1);

    printf("\nAfter delete:\n");
    print();

    return 0;
}

void insert(){
    int i;

    for(i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
}

void delete(int item) {
    int i, j, flag = 0;

    for(i = 0; i < SIZE; i++) {
        if(arr[i] == item) {
            flag = 1;
            break;
        }
    }

    if(flag){
        for(j = i; j < SIZE; j++) {
        arr[j] = arr[j+1];
        }
        printf("Item deleted\n");
        SIZE--;
    }
    else {
        printf("This element can not be deleted as it does not exist\n");
    }
}

void print() {
    int i;

    for(i = 0; i < SIZE; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}