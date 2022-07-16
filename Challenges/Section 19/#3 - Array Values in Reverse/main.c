/*
Display array values in reverse order
*/

#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 10


int main()
{
    int array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = ARR_SIZE - 1; i >= 0; i--)
    {
        printf("Original Index: %d, Reverse Index = %d, Value = %d\n", i, 9-i, array[i]);
    }
}
