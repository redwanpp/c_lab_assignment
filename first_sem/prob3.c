/*A company's insures of drivers
Written by S. M. Redwan
ID: 221-35-828 */

#include <stdio.h>
#include <string.h>

int main() {
    int age, status, result_sex;
    char marital_status[20], sex[10];

    status = 1;
    result_sex = 1;

    printf("Enter marital status: ");
    scanf("%s", marital_status);
    printf("Enter sex: ");
    scanf("%s", sex);
    printf("Enter age: ");
    scanf("%d", &age);

    //comparing string
    status = strcmp(marital_status, "married");
    result_sex = strcmp(sex, "male");

    if(status == 0) {
        printf("This driver can insure\n");
    }
    else if(status && (result_sex == 0) && age > 30) {
        printf("This driver can insure\n");
    }
    else if(status && result_sex && age > 25) {
        printf("This driver can insure\n");
    }
    else {
        printf("This driver can not be insure\n");
    }

    return 0;
}