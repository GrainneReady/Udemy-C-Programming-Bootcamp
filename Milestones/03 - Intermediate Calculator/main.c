/*
SECTION 12
Develop a calculator that:
    1. Reads 1 character ('+', '-', '/', '*', '%')
    2. Reads 2 numbers from user.
    3. Use "Switch Cases" to calculate and print out the result
*/
#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Choose the operation you wish to perform ('+', '-', '/', '*', '%%'): ");
    scanf("%c", &operator);
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d %c %d = %d\n", num1, operator, num2, result);
            }
            else printf("Error: Attempt was made to divide by zero. This is not possible.\n");
            break;
        case '*':
            result = num1 * num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %c %d = %d\n", num1, operator, num2, result);
            }
            else printf("Error: Attempt was made to divide by zero. This is not possible.\n");
            break;
        default:
            printf("This calculator does not use '%c' as an operator, please use one from the previously given Tuple.\n", operator);
            break;
    }
    return 0;
}