/*
Write a recursive function that will calculate the number of appearances of a given CHARACTER in a sequence
Read a sequence of characters from the user up until '$'
Return the total number of occurences of the given character in the sequence

Example:
  Character = 'c'
  Sequence = 'a', 'b', 'c', 'a', 'c', '$' = Return 2
*/

#include <stdio.h>
#include <stdlib.h>

int checkAppearancesOfCharInSequence(char givenChar)
{
    char currentChar;
    printf("Enter a character: ");
    scanf(" %c", &currentChar);
    if (currentChar == '$')
        return 0;
    if (currentChar == givenChar)
        return 1 + checkAppearancesOfCharInSequence(givenChar);
    return checkAppearancesOfCharInSequence(givenChar);
}


int main()
{
    char userChar;
    printf("Enter the character to check the occurences of: ");
    scanf("%c", &userChar);
    printf("Occurences of \'%c\' in Sequence: %d\n", userChar, checkAppearancesOfCharInSequence(userChar));
    return 0;
}