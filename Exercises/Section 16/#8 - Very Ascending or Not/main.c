/*
Write a Program that receives a "size" value from the user.

The program should read a sequence of "size" numers and check if the numbers are "Very Ascending" or not.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, currentVal = INT_MIN, previousVal, currentIndex = 1, notAscending = 0, sizeGiven = 0;

    do {
        printf("Enter the size of the sequence: ");
        scanf("%d", &size);

        if (size <= 0)
            printf("Error: The size must be greater than 0. Try again?\n");
        else sizeGiven = 1;

    } while(sizeGiven != 1);

    while (currentIndex <= size) {
        previousVal = currentVal;
        printf("Enter number %d: ", currentIndex);
        scanf("%d", &currentVal);
        if (currentVal <= previousVal)
            notAscending = 1;
        currentIndex++;
    }

    if (notAscending == 1)
        printf("\nNOT Very Ascending\n");
    else
        printf("\nVery Ascending\n");

    return 0;
}