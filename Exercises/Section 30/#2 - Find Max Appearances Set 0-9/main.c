/*
Write a program that initializes an array with 20 elements.
Each element can be a number with only 1 digit ({0-9}).

Using "Counting Array", find which value appears the most in the "Source Array". Print this value and the number of its appearances
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define UNIQUE_VALUES 10

int main()
{
    int arr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    int countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i]]++;
    }
    int currentMax = 0;
    for (int i = 0; i < UNIQUE_VALUES; i++)
    {
        if (countArr[i] > countArr[currentMax])
        {
            currentMax = i;
        }
    }
    printf("The value %d appeared the most. Total of Appearances: %d\n", currentMax, countArr[currentMax]);
    return 0;
}
