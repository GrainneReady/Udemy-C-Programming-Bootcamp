/*
Write a program that initializes an array of lowercase, uppercase, and space character
{a-z | A-Z | ' '}

Using "Counting Array" and "Appropriate Mapping", find which letter appears
the most in the "Source Array". Also, print its value and the number of its appearances.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define UNIQUE_VALUES 53
#define SPACE_INDEX 52
#define NUM_LETTERS_IN_ALPHABET 26

int main()
{
    char arr[SIZE] = {'K', 'O', 'c', 'R', 'c', ' ', 'K', 'r'};
    char countArr[UNIQUE_VALUES] = { 0 };
    int currentMax = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            countArr[arr[i] - 'A']++;
        else if (arr[i] >= 'a' && arr[i] <= 'z')
            countArr[arr[i] - 'a' + NUM_LETTERS_IN_ALPHABET]++;
    }

    for (int i = 0; i < UNIQUE_VALUES; i++)
    {
        if (countArr[i] > countArr[currentMax])
            currentMax = i;
    }

    char maxLetter = currentMax + 'A';
    if (currentMax >= NUM_LETTERS_IN_ALPHABET)
        maxLetter += 6;

    printf("The letter '%c' appeared the most. Total of Appearances: %d\n", maxLetter, countArr[currentMax]);
    return 0;
}
