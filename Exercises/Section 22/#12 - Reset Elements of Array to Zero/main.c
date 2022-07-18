/*
Write a function that gets an array, size of the array
Then it should set all the elements in the array to zero
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 10


void setElementsOfArrayToZero(int nums[NUMS_SIZE], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
        nums[i] = 0;
}

int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("ARRAY BEFORE SET TO ZERO: ");
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        if (i + 1 == NUMS_SIZE)
            printf("%d\n", nums[i]);
        else
            printf("%d, ", nums[i]);
    }
    setElementsOfArrayToZero(nums, NUMS_SIZE);
    printf("ARRAY AFTER SET TO ZERO: ");
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        if (i + 1 == NUMS_SIZE)
            printf("%d\n", nums[i]);
        else
            printf("%d, ", nums[i]);
    }
    return 0;
}