/*
Receive 2 Arrays of the same size
Swap between their values one-by-one --> O(n)


IMPORTANT NOTE:
Section 33 of this course is considered as "Optional"
The structure of these exercises is different to the other sections, where instead of being prompted a question and creating a solution, the exercise is kindly ran through line by line
by the course instructor. I did not create nor will I take credit for this solution, all credit goes to the course and their fantastic instructor Vlad Budnitski.
Course Link: https://www.udemy.com/share/103bNj3@PzuBNfy9sgEK1bVy6MZoiFdrzCwyHpbw5SOVrW5DGiVrObtV6j0RBf4RVM0wOooGUQ==/
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void swap (int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}


void swapArrayON(int *arr1, int *arr2)
{
    for (int i = 0; i < SIZE; i++)
        swap(&arr1[i], &arr2[i]);
}


void printArr(int *arr)
{
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr1[SIZE] = {1, 3, 5, 7, 9};
    int arr2[SIZE] = {2, 4, 6, 8, 10};
    printf("Before Swap: \n");
    printArr(arr1);
    printArr(arr2);
    swapArrayON(arr1, arr2);
    printf("After Swap: \n");
    printArr(arr1);
    printArr(arr2);
    return 0;
}