/*
Write a Recursive Function that:
    1. Receives a natural number (num)
    2. Returns the SUM of = "Arithmetical Progression from 1 to num"
SUM = num + (num - 1) + ... + 3 + 2 + 1
*/
#include <stdio.h>
#include <stdlib.h>


int sumOfOneToNum(int num)
{
    if (num == 1)
        return 1;
    return num + sumOfOneToNum(num - 1);
}


int main()
{
    int num;
    printf("Enter a whole number (E.g. 5): ");
    scanf("%d", &num);
    printf("The sum of all whole numbers from 1 up to %d is: %d", num, sumOfOneToNum(num));
    return 0;
}