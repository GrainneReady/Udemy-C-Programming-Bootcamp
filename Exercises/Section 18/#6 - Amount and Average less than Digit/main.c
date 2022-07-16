/*
Write a function that gets some "num" (of an integer type), and a "digit".
The function should:
    1. Print the Total Amount of Digits in "num" which are less than "digit"
    2. Return Average of those Digits (that are less than "digit").

Example:
    "num" = 13572, "digit" = 3; ==> Amount: 2, Average = 1.5
*/

#include <stdio.h>
#include <stdlib.h>


float amountAndAverageLessThanDigit(int num, int digit)
{
    int digitsToCheck = num, sumOfLower = 0, amountLower = 0;
    for(int currentDigit = 0; digitsToCheck > 0; currentDigit++)
    {
        currentDigit = digitsToCheck % 10;
        digitsToCheck /= 10;
        if (currentDigit < digit)
        {
            sumOfLower += currentDigit;
            amountLower++;
        }
    }
    printf("Amount lower than %d: %d\n", digit, amountLower);
    return (float)sumOfLower / amountLower;
}


int main()
{
    return 0;
}