/*
Write a program that initializes an array of lowercase letters {a - z}

Using "Counting Array" and "Appropriate Mapping", find which lowercase letter appears
the most in the "Source Array". Also, print its value and the number of its appearances.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define UNIQUE_VALUES 26

int main()
{
    char arr[SIZE] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    char countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i] - 'a']++;
    }
    int currentMax = 0;
    for (int i = 0; i < UNIQUE_VALUES; i++)
    {
        if (countArr[i] > countArr[currentMax])
            currentMax = i;
    }
    printf("The letter %c appeared the most. Total of Appearances: %d\n", currentMax + 'a', countArr[currentMax]);
    return 0;
}
