/*
Write a program that should rotate left a given array by N positions
Example:
    N = 2
    Before: 5 4 7 3
    After:  7 3 5 4
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 7
#define N 2


void rotateArrayLeftByN(int nums[NUMS_SIZE], int numsSize, int shiftAmount)
{
    for (int j = 0; j < shiftAmount; j++) {
        int firstValue = nums[0];
        for(int i = 0; i < numsSize; i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[numsSize - 1] = firstValue;
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
    rotateArrayLeftByN(nums, NUMS_SIZE, N);
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