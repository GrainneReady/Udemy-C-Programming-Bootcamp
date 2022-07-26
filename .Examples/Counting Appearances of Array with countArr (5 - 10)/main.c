/*
Given an array of a given size
The array consists of values {5, 6, 7, 8, 9, 10}
Figure out the number of appearances of each value in the array
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define UNIQUE_VALUES 6
int main()
{
    int arr[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};
    int countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i] - 5]++;
    }
    int currentMaxIndex = 0;
    for (int j = 0; j < UNIQUE_VALUES; j++)
    {
        if (countArr[j] > countArr[currentMaxIndex])
            currentMaxIndex = j;
    }
    printf("The value %d appeared the most. Total of Appearances: %d\n", currentMaxIndex + 5, countArr[currentMaxIndex]);
    return 0;
}