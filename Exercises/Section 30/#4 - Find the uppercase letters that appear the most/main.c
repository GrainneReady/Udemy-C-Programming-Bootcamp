/*
Write a program that initializes an array of uppercase letters {A - Z}

Using "Counting Array" and "Appropriate Mapping", find which uppercase letter appears
the most in the "Source Array". Also, print its value and the number of its appearances.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define UNIQUE_VALUES 26

int main()
{
    char arr[SIZE] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    char countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i] - 'A']++;
    }
    int currentMax = 0;
    for (int i = 0; i < UNIQUE_VALUES; i++)
    {
        if (countArr[i] > countArr[currentMax])
            currentMax = i;
    }
    printf("The letter %c appeared the most. Total of Appearances: %d\n", currentMax + 'A', countArr[currentMax]);
    return 0;
}
