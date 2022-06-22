/*  Writting menu
Written by S. M. Redwan
ID: 221-35-828 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    while(true) {
         int inpt;

         printf("Choice one option from below:\n");
         printf("\t1. Factorial\n");
         printf("\t2. Prime or not\n");
         printf("\t3. Odd or even\n");
         printf("\t4. Exit\n");
         scanf("%d", &inpt);

         switch(inpt) {
            case 1:
                printf("------Factorial-------\n");

                int num, fact, i;
                fact = 1;

                printf("Enter number: ");
                scanf("%d", &num);

                for(i = 1; i <= num; i++) {
                    fact *= i;
                }
                printf("Factorial is: %d\n\n\n", fact);
            break;

            case 2:
                printf("------Prime or not------\n");

                int test_num, flag;

                printf("Enter Number to test: ");
                scanf("%d", &test_num);

                flag = true;

                for(i = 2; i < test_num; i++){
                    if(test_num % i == 0) {
                        flag = false;
                    }
                }
                
                if(flag == true) {
                    printf("%d is prime number\n", test_num);
                }
                else {
                    printf("%d is not prime number\n\n\n");
                }
            break;

            case 3:
                printf("------Odd or even------\n");
            
                printf("Enter a number to test: ") ;
                scanf("%d", &test_num);

                if(test_num % 2 == false) {
                    printf("%d is even number\n\n\n", test_num);
                }
                else {
                    printf("%d is odd number\n\n\n", test_num);
                }
            break;

            case 4:
                printf("Thank you for using our software\n");

                return 0;
            break;

            default:
                printf("Invalid!!! Enter right option\n\n\n");
            break;
         }
    }
    

    return 0;
}