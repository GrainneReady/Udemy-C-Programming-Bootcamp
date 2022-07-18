/*
Write a Recursive Fucntion that:
    1. Receives a number - "num"
    2. Returns the TOTAL DIGITS in num
*/

#include <stdio.h>
#include <stdlib.h>


int countOfDigits(int num)
{
    if (num < 0)
        return -1;  // INVALID INPUT CODE
    if (num >= 10)
        return 1 + countOfDigits(num / 10);
    return 1;
}


int main()
{
    int num;
    printf("Enter a number to find the count of digits of: ");
    scanf("%d", &num);
    printf("The count of digits of %d is: %d", num, countOfDigits(num));
    return 0;
}