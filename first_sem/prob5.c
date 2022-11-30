/* This pogram will calculate the sum of 2D array
Written by S. M. Redwan 
ID: 221-35-828 */

#include <stdio.h>
#include <windows.h>

int main() {
    int row, column, sum, i, j;

    printf("Please enter how many row you want in your array: ");
    scanf("%d", &row);

    printf("Please enter how many column you want in your array: ");
    scanf("%d", &column);

    int matrix[row][column];
    
    sum = 0;

    printf("Enter element of your array: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);

            sum += matrix[i][j];
        }
    }

    system("cls");

    printf("Your array is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Summition of all elements of your array is: %d\n\n\n", sum);

    return 0;
}