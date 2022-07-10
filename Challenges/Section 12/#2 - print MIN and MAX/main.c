/*
Write a program that gets 2 floating-point numbers and prints:
    maximum and minimum
*/
#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Enter the first floating point number: ");
    scanf("%lf", &num1);
    printf("Enter the second floating point number: ");
    scanf("%lf", &num2);

    if (num1 > num2)
        printf("Maximum: %lf \nMinimum: %lf\n", num1, num2);
    else
        printf("Maximum: %lf \nMinimum: %lf\n", num2, num1);
    return 0;
}