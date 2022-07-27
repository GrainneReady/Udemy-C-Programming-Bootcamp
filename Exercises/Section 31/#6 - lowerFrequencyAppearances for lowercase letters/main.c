/*
Write a program that reads a filename from the user.
The program should create a "frequencyAppearances" array
for lowercase letters ('a' - 'z') and
print the number of times each lowercase letter appears in the file
*/

#include <stdlib.h>
#include <stdio.h>
#define LETTERS_IN_ALPHABET 26
int main()
{
    FILE* fp;
    char currentChar;
    char filename[50] = { 0 };
    char frequencyAppearances[LETTERS_IN_ALPHABET] = { 0 };
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp != NULL)
    {
        while ((currentChar = fgetc(fp)) != EOF)
        {
            if (currentChar >= 'a' && currentChar <= 'z')
            {
                frequencyAppearances[currentChar - 'a']++;
            }
        }
    }
    for (int i = 0; i < LETTERS_IN_ALPHABET; i++)
    {
        if (frequencyAppearances[i] > 0)
            printf("The letter '%c' appears %d times.\n", i + 'a', frequencyAppearances[i]);
    }
    return 0;
}