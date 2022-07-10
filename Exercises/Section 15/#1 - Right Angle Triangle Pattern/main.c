/*
Write a program that receives an integer - "n".
The program should print a right-angle triangle with the following pattern up to a given "n".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the integer 'n': ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}