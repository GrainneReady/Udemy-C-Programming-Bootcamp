/*
Write a program that will count the number of lines in a text file.
NOTE: May need to change the file path in fopen() if it doesn't work
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    char currentChar;
    int lineCount = 1;
    fp = fopen("exerciseFile.txt", "r");
    if (fp != NULL)
    {
        while ((currentChar = fgetc(fp)) != EOF) {
            if (currentChar == '\n')
                lineCount++;
        }
        fclose(fp);
    }
    printf("\n\nNumber of Lines in File: %d", lineCount);
    return 0;
}