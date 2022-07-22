/*
Write a recursive function that receives an integer num and a digit.
The function should return:
    -  1, if the count of "digit" occurences in num is even
    -  0, otherwise (if the number of "digit" occurences in num is odd).

Examples:
    num = 124, digit = 2 --> 0 (1 occurence - odd)
    num = 12342, digit = 2 --> 1 (2 occurences - even)
    num = 10200240, digit = 0 --> 1 (4 occurences - even)
*/

#include <stdio.h>
#include <stdlib.h>


int checkIfDigitOccurenceEven(int num, int digit)
{
    if (num < 10)
        return (num != digit) ? 1 : 0;
    return ((num % 10 != digit) ? checkIfDigitOccurenceEven(num/10, digit) : !checkIfDigitOccurenceEven(num/10, digit));
}


int main()
{
    int num, digit, digitOccurenceIsEven;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to check the occurences of: ");
    scanf("%d", &digit);
    digitOccurenceIsEven = checkIfDigitOccurenceEven(num, digit);
    if (digitOccurenceIsEven == 1)
        printf("The Digit Occurence of %d in %d is Even.\n", digit, num);
    else if (digitOccurenceIsEven == 0)
        printf("The Digit Occurence of %d in %d is Odd.\n", digit, num);
    return 0;
}
