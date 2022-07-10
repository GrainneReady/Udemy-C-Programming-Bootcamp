/*
Write a Program that receives 3 integers.

The program should print "Divisible" if in each pair between the three numbers there is at least one number that can be divided by the other - without a remainder.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    if ((num1 % num2 == 0 || num2 % num1 == 0) && (num1 % num3 == 0 || num3 % num1 == 0) && (num2 % num3 == 0 || num3 % num2 == 0))
        printf("The numbers (%d, %d, %d) are divisible.", num1, num2, num3);
    else printf("The numbers (%d, %d, %d) are non-divisible.", num1, num2, num3);
    return 0;
}