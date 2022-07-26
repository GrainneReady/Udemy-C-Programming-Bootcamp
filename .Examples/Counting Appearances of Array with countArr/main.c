
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
#define UNIQUE_VALUES 5

int main()
{
    int arr[SIZE] = {0, 2, 0, 1, 0, 0, 2, 0};
    int countArr[UNIQUE_VALUES] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        countArr[arr[i]]++;
    }
    printf("Count of '0': %d\n", countArr[0]);
    printf("Count of '1': %d\n", countArr[1]);
    printf("Count of '2': %d\n", countArr[2]);
    return 0;
}

