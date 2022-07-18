/*
Write a program that initializes an Array.
3 elements should represent a date:
    1. Day
    2. Month
    3. Year
The program should create another array and copy the data from original array
*/

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 3

void main()
{
    int dateArray[ARR_SIZE] = {13, 10, 2009};
    int copiedDateArray[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        copiedDateArray[i] = dateArray[i];
        printf("Original: %d\n", dateArray[i]);
        printf("Copy: %d\n\n", copiedDateArray[i]);
    }
}