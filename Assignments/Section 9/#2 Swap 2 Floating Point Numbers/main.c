#include <stdio.h>

int main() {
    double num1, num2;
    printf("Enter number one: ");
    scanf("%lf", &num1);
    printf("Enter number two: ");
    scanf("%lf", &num2);
    printf("Before Swap: num1 = %lf, num2 = %lf\n", num1, num2);
    num2 += num1;
    num1 = num2 - num1;
    num2 = -1 * (num1 - num2);
    printf("After Swap:  num1 = %lf, num2 = %lf\n", num1, num2);
}