/*
Write a program that should rotate right a given array by N positions
Example:
    Before:
        1234567
    After (shift by 2):
        6712345
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 4
#define N 1


void rotateArrayRightByN(int nums[NUMS_SIZE], int numsSize, int shiftAmount)
{
    for (int j = 0; j < shiftAmount; j++)
    {
        int lastValue = nums[numsSize - 1];
        for (int i = numsSize - 1; i >= 0; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[0] = lastValue;
    }
}


int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    
    printf("ELEMENTS BEFORE ROTATE LEFT: ");
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        if (i + 1 != NUMS_SIZE)
            printf("%d, ", nums[i]);
        else
            printf("%d\n", nums[i]);
    }
    rotateArrayRightByN(nums, NUMS_SIZE, N);
    printf("ELEMENTS AFTER ROTATE LEFT: ");
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        if (i + 1 != NUMS_SIZE)
            printf("%d, ", nums[i]);
        else
            printf("%d\n", nums[i]);
    }
    return 0;
}