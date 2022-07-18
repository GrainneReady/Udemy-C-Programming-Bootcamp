/*

*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 5


int largestSumOfTwoAdjacents(int nums[NUMS_SIZE], int numsSize)
{
    int largestSum = -1, currentNeighbours = 0;
    for (int i = 0; i < numsSize-1; i++)
    {
        currentNeighbours = nums[i] + nums[i + 1];
        if (nums[i] + nums[i + 1] > largestSum)
            largestSum = currentNeighbours;
    }
    return largestSum;
}

int main()
{
    int nums[NUMS_SIZE] = {5, 7, 1, 5, 2};
    printf("The largest sum of two adjacent members in the array is: %d", largestSumOfTwoAdjacents(nums, NUMS_SIZE));
    return 0;
}