/*

*/
#include <stdio.h>
#include <stdlib.h>
#define STRING_SIZE 30
int strcmp(char *string1, char *string2)
{
    int comparison = 0, i;
    for (i = 0; string1[i] != '\0', string1[i] != '\0'; i++)
    {
        if (string1[i] > string2[i])
            return comparison = 1;
        else if (string1[i] < string2[i])
            return comparison = -1;
    }
    if (string1[i] == '\0' && string2[i] != '\0')
        comparison = -1;
    else if (string1[i] != '\0' && string2[i] == '\0')
        comparison = 1;
    return comparison;
}


int main()
{
    char string1[STRING_SIZE];
    char string2[STRING_SIZE];
    printf("Enter string 1: ");
    gets(string1);
    printf("Enter string 2: ");
    gets(string2);
    printf("strcmp(string1, string2) == %d", strcmp(string1, string2));
    return 0;
}