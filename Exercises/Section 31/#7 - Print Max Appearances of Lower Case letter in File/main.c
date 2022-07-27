/*
Write a program that reads a filename from the user.
The program should create a "frequencyAppearances" array
for lowercase letters ('a' - 'z') and
print the (first) character that appeared most of the times
*/

#include <stdlib.h>
#include <stdio.h>
#define LETTERS_IN_ALPHABET 26
int main()
{
    FILE* fp;
    int currentMaxIndex = 0;
    char currentChar;
    char filename[50] = { 0 };
    char frequencyAppearances[LETTERS_IN_ALPHABET] = { 0 };
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen("filename", "r");
    if (fp != NULL)
    {
        while ((currentChar = fgetc(fp)) != EOF)
        {
            if (currentChar >= 'a' && currentChar <= 'z')
            {
                frequencyAppearances[currentChar - 'a']++;
            }
        }
        for (int i = 1; i < LETTERS_IN_ALPHABET; i++)
        {
            if (frequencyAppearances[i] > frequencyAppearances[currentMaxIndex])
                currentMaxIndex = i;
        }
    printf("The letter '%c' appeared the most in the file (%d times).\n", currentMaxIndex + 'a', frequencyAppearances[currentMaxIndex]);
    }
    else printf("Error: Couldn't open file. Is it in the project? Was there a typo in the name?");
    return 0;
}