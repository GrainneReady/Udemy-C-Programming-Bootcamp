/*
Write a Program that receives a "num" from the user.

The program should print the "num" even numbers (starting from 2).

Example #1: 5 -> 2, 4, 6, 8, 10
Example #2: 7 -> 2, 4, 6, 8, 10, 12, 14
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max;
    printf("How many even natural numbers do you want?: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++)
    {
        printf("%d", i * 2);
        if (i != max)
            printf(", ");
    }
    printf("\n");
    return 0;
}