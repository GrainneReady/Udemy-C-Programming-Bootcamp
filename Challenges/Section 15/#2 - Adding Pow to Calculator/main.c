/*
Write a program that receives as input two value:
  1. Number
  2. Pow

The program should calculate the result of: "num^pow"
  and print the result to the screen.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pow, result, i = 1;
    printf("What is your base number?: ");
    scanf("%d", &num);
    printf("What is your power/exponent?: ");
    scanf("%d", &pow);
    result = num;

    while (i < pow) {
        result *= num;
        i++;
    }
    printf("%d^%d = %d", num, pow, result);
    
    return 0;
}