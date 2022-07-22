/*
Write a recursive function that receives:
    - an integer value "total".
    - a character value "ch1".
    - a character value "ch2".

The function should print a sequence of "total" ch1's and then a sequence of "total" ch2's

Examples:
    "total = 3, ch1 = 'a', ch2 = 'c' --> aaacccccc"
    "total = 2, ch1 = 'b', ch2 = 'd' --> bbdddd"
*/

#include <stdio.h>
#include <stdlib.h>


void sequenceOfChar1AndChar2(int total, char ch1, char ch2)
{
    if (total >= 1)
    {
        printf("%c", ch1);
        sequenceOfChar1AndChar2(total - 1, ch1, ch2);
        printf("%c", ch2);
        printf("%c", ch2);
    }
}


int main()
{
    int total;
    char ch1, ch2;
    printf("Enter the total times to print each number: ");
    scanf("%d", &total);
    printf("Enter the value for character 1 (ch1): ");
    scanf(" %c", &ch1);
    printf("Enter the value for character 2 (ch2): ");
    scanf(" %c", &ch2);
    sequenceOfChar1AndChar2(total, ch1, ch2);
    return 0;
}