/*
Write a program that receives some "num"
Your job is to get the sum of all of the even digits in num, and also get the sum of all of the odd digits in num
Then, you have to print out the result of the sum of the even digits minus the sum of the odd digits.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, evenSum = 0, oddSum = 0, numberReceived = 0, currentDigit;
    do {
    printf("Enter a positive whole number: ");
    scanf("%d", &num);

    if (num <= 0)
        printf("Error: %d is not a positive whole number. Try again? \n", num);
    else numberReceived = 1;
    } while (numberReceived != 1);

    while (num > 0)
    {
        currentDigit = num % 10;
        num /= 10;
        if (currentDigit % 2 == 0)
            evenSum += currentDigit;
        else oddSum += currentDigit;
    }
    printf("Even Digit Sum - Odd Digit Sum \n= %d - %d \n= %d", evenSum, oddSum, evenSum - oddSum);
    return 0;
}