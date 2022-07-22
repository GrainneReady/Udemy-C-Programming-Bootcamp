/*
Write a recursive function that receives:
    - an intger value "total".
    - a character "val" (representing a lowercase character) 'a' - 'z'

The function should print a sequence of "total" lowercase "vals" and then a sequence of "total" uppercase "vals"

Examples:
    "total = 3, val = 'c'"  --> cccCCC
    "total = 2, val = 'b'"  --> bbBB
*/

#include <stdio.h>
#include <stdlib.h>


void sequenceOfLowerCaseThenUpperCase(int total, char val)
{
    if (total >= 1)
    {
        printf("%c", val);
        sequenceOfLowerCaseThenUpperCase(total - 1, val);
        printf("%c", val - 0x20);  // Show lowercase value as uppercase equivalent
    }
}


int main()
{
    int total;
    char val;
    printf("Enter the total times to print each case: ");
    scanf("%d", &total);
    printf("Enter the lowercase value to use (E.g. 'v'): ");
    scanf(" %c", &val);
    sequenceOfLowerCaseThenUpperCase(total, val);
    return 0;
}