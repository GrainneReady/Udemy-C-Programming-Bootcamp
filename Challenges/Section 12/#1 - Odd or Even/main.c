/*
Write a program that checks whether a given number is even or odd
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a whole number (E.g. 5): ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);

    return 0;
}