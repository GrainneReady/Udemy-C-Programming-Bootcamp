/*
strcpy
copies source string to destination string
*/

#include <stdio.h>
#include <stdlib.h>
#define STRING_SIZE 15


char* strcpy(char *destString, char *srcString)
{
    char *destPointer = destString;
    int i;
    for (i = 0; srcString[i] != '\0'; i++)
    {
        destString[i] = srcString[i];
    }
    destString[i] = '\0';
    return destPointer;
}

int main()
{
    char string1[STRING_SIZE];
    char string2[STRING_SIZE];
    printf("Enter Source String: ");
    gets(string1);
    printf("\nSource String: %s\n", string1);
    strcpy(string2, string1);
    printf("Destination String after strcpy: %s\n", string2);
}