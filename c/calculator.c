#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double num1, num2, answer;
int operation;

int math(double num1, double num2, int operation) {
    switch (operation) {
        case 1:
            return num1 + num2;
            break;
        case 2:
            return num1 - num2;
            break;
        case 3:
            return num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                printf("ERROR: Cant divide by 0");
                return 1;
            }else{
                return num1 / num2;
                break;
            }
        default:
            printf("Invalid Operator");
            return 1;
    }
}

int main() {
    printf("What operation would you like to do?\n1=+\n2=-\n3=*\n4=/\n");
    scanf("%d", &operation);
    printf("\nInput the numbers for the operation\n(eg. 5 7)\n");
    scanf("%lf %lf", &num1, &num2);
    answer = math(num1, num2, operation);
    printf("The answer is %lf", answer);
    return 0;
}