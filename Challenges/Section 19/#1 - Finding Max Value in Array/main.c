/*
Write a program that initializes an array of digits (of your phone number).
For Example:
    "1402945" --> 1, 4, 0, 2, 9, 4, 5
The program should find the MAX digit and print it to the screen/
    "Maximum digit is: 9"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digits[] = {1, 4, 2, 6, 8, 4, 1, 9, 5, 2, 8};
    int max = INT_MIN;
    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
    {
        if (digits[i] > max)
            max = digits[i];
    }
    printf("The maximum digit in the list of digits is: %d\n", max);
    return 0;
}