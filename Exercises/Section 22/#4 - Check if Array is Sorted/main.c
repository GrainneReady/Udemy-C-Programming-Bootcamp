/*
Write a program that creates an Array (of integers).
The user is going to specify the values for the array.
Check if the array is "Really Sorted", "Sorted", or "Not Sorted"

Example 1:
    [1,2,5,7,10] --> Really Sorted
    [1,2,2,5,10] --> Sorted
    [1,2,10,7,8] --> Not Sorted
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 5


int checkSortType(int nums[NUMS_SIZE], int numSize)
{
    // -1 = NULL
    // 0  = Not Sorted
    // 1  = Sorted
    // 2  = Really Sorted
    int sortType = -1, currentNum = INT_MIN, previousNum;
    for (int i = 0; i < numSize; i++)
    {
        previousNum = currentNum;
        currentNum = nums[i];
        if (sortType != 0 && sortType != 1 && currentNum > previousNum)
            sortType = 2;
        else if (sortType != 0 && currentNum == previousNum)
            sortType = 1;
        else if (currentNum < previousNum)
            sortType = 0;
    }
    return sortType;
}


int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++) {
        printf("Please enter value #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    int sortType = checkSortType(nums, NUMS_SIZE);
    if (sortType == 2)
        printf("Array is Really Sorted.\n");
    else if (sortType == 1)
        printf("Array is Sorted.\n");
    else if (sortType == 0)
        printf("Array is Not Sorted");
    else
        printf("Error: Invalid Parameters\n");
    return 0;
}