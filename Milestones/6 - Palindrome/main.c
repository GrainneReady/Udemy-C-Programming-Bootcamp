/*
SECTION 23
Write a Program that:
    1. Reads a string from the user
    2. Checks if the string is a palindrome (string == reversedString)

Examples of Palindromes:
    'racecar' 'kevek' 'kayak' 'deified'
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define STRING_SIZE 30

int checkIfPalindrome(char *string)
{
    int stringLength = strlen(string);
    int lowerIndexValue, newStringLength = 0;
    char newString[stringLength];
    for (int i = 0; i < stringLength; i++)
    {
        lowerIndexValue = (string[i] >= 'A' && string[i] <= 'Z' ? tolower(string[i]) : string[i]);
        if (lowerIndexValue >= 'a' && lowerIndexValue <= 'z') {
            newString[newStringLength] = lowerIndexValue;
            newStringLength++;
        }
    }
    newString[newStringLength] = '\0';
    for (int i = 0; i < newStringLength; i++)
    {
        if (newString[i] != newString[newStringLength - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    char string[STRING_SIZE];
    printf("Enter a string to see if its a palindrome: ");
    gets(string);
    int isPalindrome = checkIfPalindrome(string);
    if (isPalindrome == 1)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is not a Palindrome.\n");
    return 0;
}
