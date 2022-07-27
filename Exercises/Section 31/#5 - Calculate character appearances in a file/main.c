/*
Write a program that reads a filename and a certain character from the user
The program should calculate and print the total appearances of the character in the file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userChar, currentChar;
    int numOfAppearances = 0;
    FILE* fp;
    fp = fopen("exerciseFile.txt", "r");
    if (fp != NULL)
    {
        printf("Enter a character to calculate the appearances of: ");
        scanf(" %c", &userChar);
        while ((currentChar = fgetc(fp)) != EOF) {
            if (userChar == currentChar)
                numOfAppearances++;
        }
        printf("The character '%c' appeared %d times in the file.\n", userChar, numOfAppearances);
    }
}