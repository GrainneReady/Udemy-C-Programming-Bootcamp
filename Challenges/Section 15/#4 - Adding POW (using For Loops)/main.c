/*
Write a program that receives as input two values:
    1. Number.
    2. Power.

The program should calculate the result of: "num^pow"
and print the result to the screen.
(Using: For Loop)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pow, result;
    printf("Enter your base number: ");
    scanf("%d", &num);
    printf("Enter your power/exponent: ");
    scanf("%d", &pow);
    result = num;

    for (int i = 2; i < pow; i++)
    {
        result *= result;
    }
    printf("%d^%d = %d", num, pow, result);
}