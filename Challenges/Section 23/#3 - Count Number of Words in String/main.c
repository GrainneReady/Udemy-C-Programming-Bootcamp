/*
Write a program that:
    1. Reads a string from the user
    2. Finds out the number of words
    3. Prints the result to the screen

Example:
    "Hello! My Name is Vlad!"
    outputs "Number of words in the string is 5"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING_SIZE 30

int countWordsInString(char *string)
{
    int numberOfSpaces = 0;
    for (int i = 0;  i < strlen(string); i++)
    {
        if (string[i] == ' ')
            numberOfSpaces++;
    }
    return numberOfSpaces + 1;
}


int main()
{
    char userString[STRING_SIZE];
    printf("Enter a string: ");
    gets(userString);
    printf("Number of words in string: %d\n", countWordsInString(userString));
    return 0;
}
