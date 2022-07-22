/*
Write a recursive function that will calculate and return the SUM of all EVEN numbers in a sequence
Read a sequence of integers from the user.. Up until -1

EXAMPLE:
    1, 3, 4, 6, -1 = Return 10
*/

#include <stdio.h>
#include <stdlib.h>


int sumOfEvenNumbersInSequence()
{
    int currentNum;
    printf("Enter a number: ");
    scanf("%d", &currentNum);
    if (currentNum == -1)
        return 0;
    return (currentNum % 2 == 0) ? currentNum + sumOfEvenNumbersInSequence() : sumOfEvenNumbersInSequence();
}


int main()
{
    printf("Sum of Even Numbers in Sequence: %d\n", sumOfEvenNumbersInSequence());
    return 0;
}