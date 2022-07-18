/*
1.  Write a function that takes a string and returns its length
2. Write a program that:
    a.  Reads a string from the user.
    b.  Calls the function at (1) to find the length of the string.
    c.  Prints the length to the screen
*/

#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 20
int getLengthOfString(char string[])
{
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    int length;
    char str[STRING_SIZE];
    printf("Enter a string: ");
    gets(str);
    length = getLengthOfString(str);
    printf("The length of the string %s is: %d\n", str, length);
    return 0;
}