/*
Write a program that reads digits from user
The program should find the INDEX of the "maximum value digit"
and print the index to the screen.

Example: "1402945" --> "Index of Max Value is: 4"
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_DIGITS 7

int main()
{
    int digits[NUMBER_OF_DIGITS];
    int max = INT_MIN, maxIndex = -1;
    for (int i = 0; i < NUMBER_OF_DIGITS; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &digits[i]);
        if (digits[i] > max) {
            maxIndex = i;
            max = digits[i];
        }
    }
    printf("Index of Max Digit Value is: %d\n", maxIndex);
    return 0;
}