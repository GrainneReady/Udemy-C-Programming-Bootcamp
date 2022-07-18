/*
Write a Recursive Function that:
    1. Receives a natural number (num)
    2. Returns the FACTORIAL of num

Factorial(num) = num * (num - 1) * ... * 3 * 2 * 1
*/
#include <stdio.h>
#include <stdlib.h>


int factorial(int num)
{
    if (num == 1)
        return 1;
    else if (num <= 0)
        return -1; // CODE FOR INCORRECT INPUT
    return num * factorial(num - 1);
}


int main()
{
    int num;
    printf("Enter the number you want to get the factorial of: ");
    scanf("%d", &num);
    printf("Factorial(%d) = %d\n", num, factorial(num));
    return 0;
}