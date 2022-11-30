/*printing pattern  1
                    2 3
                    4 5 6
                    7 8 9 10
Written by S. M. Redwan
ID: 221-35-5-828
*/

#include <stdio.h>

int main() {
    int i, j, number;

    number = 1;

    for(i = 0; i < 4; i++) {
        for(j = 0; j <= i; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}