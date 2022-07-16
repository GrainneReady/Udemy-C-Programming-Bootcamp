/*
Write a function that:
    1. Receives a 2-digits number
    2. Makes sure it has 2 digits
    3. Finds and prints maximum digit
*/

#include <stdlib.h>
#include <stdio.h>
int maximumDigitFinder(int num)
{
    int maxDigit;
    if (num/10 > num % 10)
        maxDigit = num/10;
    else
        maxDigit = num % 10;
    return maxDigit;
}


int main()
{
    int num, maxDigit, correctInput = 0;
    do {
        printf("Enter the 2-digit number you want to find the maximum digit of: ");
        scanf("%d", &num);
        if (num >= 10 && num < 100)
            correctInput = 1;
        else
            printf("Error! %d is not a 2-digit number. Try again?\n", num);
    } while (correctInput != 1);
    maxDigit = maximumDigitFinder(num);
    printf("The maximum digit in %d is: %d\n", num, maxDigit);
    return 0;
}