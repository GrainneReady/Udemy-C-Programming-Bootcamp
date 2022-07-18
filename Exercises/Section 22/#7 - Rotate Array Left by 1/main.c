/*
Write a program that should rotate left a given array by 1 position
Before: 5 4 7 3
After:  4 7 3 5
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 8

void rotateArrayLeft(int nums[NUMS_SIZE], int numsSize)
{
    int firstValue = nums[0];
    for(int i = 0; i < numsSize; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[numsSize - 1] = firstValue;
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
    rotateArrayLeft(nums, NUMS_SIZE);
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