//insert two differnt numbers at differernt porsition

#include <stdio.h>

int arr[10] = {1, 2, 3, 4, 5, 6, 7};

void insert_element(int pos, int data);
void print();

int main() {
    int pos1, pos2, item1, item2;

    printf("Before insert:\n");
    print();

    printf("Enter enter two number for insert in array:\n");
    scanf("%d %d", &item1, &item2);

    printf("Enter two index:(0-9)\n");
    scanf("%d %d", &pos1, &pos2);

    if(pos1 > pos2) {
        insert_element(pos1, item1);
        insert_element(pos2, item2);
    }
    else {
        insert_element(pos2, item2);
        insert_element(pos1, item1);
    }

    printf("After insert data:\n");
    print();

    return 0;
}

void insert_element(int pos, int data) {
    int i;

    for(i = 9; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[i] = data;
}

void print() {
    int i;

    for(i = 0; i < 10; i++) {
        printf("%d  ", arr[i]);
    }

    printf("\n");
}