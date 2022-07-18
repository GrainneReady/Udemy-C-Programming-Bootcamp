/*
Write a Recursive Function thatL
    1. Receives a number - "num".
    2. Returns the SUM of all DIGITS.
*/

#include <stdio.h>
#include <stdlib.h>


int sumOfDigits(int num)
{
    if (num >= 10)
        return num % 10 + sumOfDigits(num / 10);
    return num;
}


int main()
{
    int num;
    printf("Enter a number to find the sum of digits of: ");
    scanf("%d", &num);
    printf("The sum of digits of %d is: %d", num, sumOfDigits(num));
    return 0;
}