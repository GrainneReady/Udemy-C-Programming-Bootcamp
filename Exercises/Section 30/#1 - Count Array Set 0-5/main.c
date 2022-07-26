/*
Given an array of a given size
The array consists of values {0, 1, 2, 3, 4, 5}
Figure out the number of appearances of each value in the array
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
#define UNIQUE_VALUES 6
int main()
{
    int arr[SIZE] = {4, 3, 0, 1, 2, 4, 0, 0, 2, 2, 5, 5, 4, 4, 5};
    int countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i]]++;
    }
    for (int j = 0; j < UNIQUE_VALUES; j++)
    {
        printf("Count of '%d's: %d\n", j, countArr[j]);
    }
    return 0;
}