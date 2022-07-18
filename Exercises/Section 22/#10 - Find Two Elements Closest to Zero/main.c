/*
Write a program that calculates and prints the sum of two elements that is the most close to 0 in an array of integers.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUMS_SIZE 6


int sumOfTwoElemsClosestToZero(int nums[NUMS_SIZE], int numsSize)
{
    int closestSum = nums[0] + nums[1];
    for (int i = 0; i < numsSize; i++) {
        for (int j = 1 + i; j < numsSize; j++)
        {
            if (abs(nums[i] + nums[j]) < abs(closestSum))
                closestSum = nums[i] + nums[j];
        }
    }
    return closestSum;
}


int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("The sum of the two elements in the array that are closest to zero is: %d\n", sumOfTwoElemsClosestToZero(nums, NUMS_SIZE));
    return 0;
}