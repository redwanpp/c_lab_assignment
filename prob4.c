/*  Writting menu
Written by S. M. Redwan
ID: 221-35-828 */

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    int input, i;

    system("cls");

    printf("\tPlease choice a option from below: \n\n");
    printf("\t\t1. Fibonacci of a number\n");
    printf("\t\t2. Prime or not\n");
    printf("\t\t3. Odd or even\n");
    printf("\t\t4. Exit\n");
    scanf("%d", &input);

    switch(input) {
        case 1:
            system("cls");
            printf("--------------Fibonacci------------\n");
            int n, first, second, fibo;

            printf("Enter how many number you want to watch: ");
            scanf("%d", &n);

            printf("Enter first number of your fibonacci seris: ");
            scanf("%d", &first);
            printf("Enter second number of you fibonacci series: ");
            scanf("%d", &second);

            fibo = 0;

            printf("%d %d ", first, second);

            for(i = 1; i < (n - 1); i++) {
                fibo = first + second;

                first = second;
                second = fibo;

                printf("%d ", fibo);
            }
            break;

        case 2:
            system("cls");
            printf("-------------Prime or not----------\n");

            int num, i, root, flag;

            flag = 1;

            printf("Enter your test number: ");
            scanf("%d", &num);

            if(num == 0) {
                printf("%d is prime\n", num);
                return 0;
            }
            else if(num % 2 == 0) {
                printf("%d is not prime\n", num);
                return 0;
            }

            root = sqrt(num);

            for(i = 3; i <= root; i += 2) {
                if (num % i == 0) {
                    flag = 0;
                }
            }

            if(flag) {
                printf("%d is prime\n", num);
            }
            else {
                printf("%d is not prime\n", num);
            }
            
            break;

        case 3:
            system("cls");
            printf("------------Odd or Even-----------\n");

            int test_number;

            printf("Enter your test number here: ");
            scanf("%d", &test_number);

            if(test_number % 2 == 0) {
                printf("%d is even number\n", test_number);
            }
            else {
                printf("%d is odd number\n", test_number);
            }

            break;
            
        default:
            printf("_ _ _ _ _ _ _ _Exit_ _ _ _ _ _ _ _ _ _ \n\n");
            
    }

    return 0;
}