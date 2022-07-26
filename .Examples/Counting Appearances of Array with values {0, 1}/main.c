/*
Given an array of a given size
The array consists of only values {0, 1}
Figure out the number of appearances of value 0 in the array
Figure out the number of appearances of value 1 in the array

Also, in the same program, figure out the number of appearances of values 0, 1, and 2 in an array that consists of only values {0, 1, 2}
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{
    /* ARRAY WITH {0, 1}
    int arr[SIZE] = {0, 1, 0, 1, 0, 0, 1, 0};
    int count0 = 0, count1 = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
    }
    printf("Count of '0's = %d\n", count0);
    printf("Count of '1's = %d\n", count1);
    */
   int arr[SIZE] = {0, 2, 0, 1, 0, 0, 2, 0};
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
    }
    printf("Count of '0's = %d\n", count0);
    printf("Count of '1's = %d\n", count1);
    printf("Count of '2's = %d\n", count2);
    return 0;
}