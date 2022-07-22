/*
Write a recursive function that will calculate and return the total number of occurences of EVEN numbers in a sequence
Read a sequence of integers from the user.. Up until -1

EXAMPLE:
    1, 3, 4, 6, -1 = Return 2
*/

#include <stdio.h>
#include <stdlib.h>


int countEvenNumbersInSequence()
{
    int currentNum;
    printf("Enter a number: ");
    scanf("%d", &currentNum);
    if (currentNum == -1)
        return 0;
    return (currentNum % 2 == 0 ? countEvenNumbersInSequence() + 1 : countEvenNumbersInSequence());
}


int main()
{
    printf("Total Amount of Even Numbers in Sequence: %d\n", countEvenNumbersInSequence());
    return 0;
}