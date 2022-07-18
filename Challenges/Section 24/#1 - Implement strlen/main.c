/*
strlen
Function that receives a string
Finds and returns the length of the string
*/

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 45

int strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    
    return length;
}

int main()
{
    char string[ARRAY_SIZE];
    printf("Enter a string to check the length of ");
    gets(string);
    printf("The length of %s is: %d\n", string, strlen(string));
    return 0;
}