/*
Write a program that creates an array of Integers.
The program should check and print if the array has at least one element with "good neighbors".
    - An element with good neighbors has a value that equals to the multiplication of both its neighbors (right, left).

Example: [1, 3, 2, 6, 3] --> Array has "Good Neighbours"
         [4, 4, 7, 4, 9] --> Array doesn't have "Good Neighbours"
*/

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 5

int main()
{
    int array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < ARR_SIZE - 1; i++) {
        if (i > 0) {
            if (array[i - 1] * array[i + 1] == array[i]) {
                printf("Array has Good Neighbours.\n");
                return 0;
            }
        }
    }
    printf("Array doesn't have Good Neighbours.\n");
    return 0;
}