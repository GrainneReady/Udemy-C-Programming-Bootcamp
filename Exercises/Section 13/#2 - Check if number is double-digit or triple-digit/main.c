/*
Write a program that checks if a given number is "double-digit" or "triple-digit".
22 -> "double-digit"
35 -> "double-digit"
101 -> "triple-digit"
5 -> "neither double/triple"
1050 -> "neither double/triple"
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);
    if (num < 10 || num >= 1000)
        printf("neither double/triple");
    else if (num < 100)
        printf("double-digit");
    else printf("triple-digit");
    return 0;
}