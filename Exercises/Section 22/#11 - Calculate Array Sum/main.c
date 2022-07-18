/*
Write a function that gets an array, size of the array
Then it should find and return the sum of all elements in the array
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 10


int sumOfArray(int nums[NUMS_SIZE], int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
        sum += nums[i];
    return sum;
}

int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("The sum of all values in the array is: %d\n", sumOfArray(nums, NUMS_SIZE));
    return 0;
}