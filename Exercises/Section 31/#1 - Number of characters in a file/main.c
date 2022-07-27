/*
Write a program that will count the number of characters in a text file.
NOTE: The '\n' character will be included in the count
NOTE: May need to change the file path in fopen() if it doesn't work
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    char currentChar;
    int charCount = 0;
    fp = fopen("exerciseFile.txt", "r");
    if (fp != NULL)
    {
        while ((currentChar = fgetc(fp)) != EOF) {
            charCount++;
            printf("%c", currentChar);
        }
        fclose(fp);
    }
    printf("\n\nNumber of Characters in File: %d", charCount);
    return 0;
}