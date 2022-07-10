/*
Write a Program that receives a "num" from the user.

The program should print all the integers from 1 up to "num" and vice versa.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i =1;
    printf("Enter a positive whole number (E.g. 5, 101): ");
    scanf("%d", &num);
    for (i; i <= num; i++) {
        printf("%d", i);
        if (i != num)
            printf(", ");
    }
    i--;
    printf("\n");
    for (i; i >= 1; i--) {
        printf("%d", i);
        if (i != 1)
            printf(", ");
    }
    return 0;
}