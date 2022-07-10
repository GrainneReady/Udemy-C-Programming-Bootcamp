/*
Write a program that checks if 2 numbers (received from the user) are the same.
If they're the same, print - True
Otherwise, print - False
*/
#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    if (num1 == num2)
        printf("True\n");
    else printf("False\n");
    return 0;
}