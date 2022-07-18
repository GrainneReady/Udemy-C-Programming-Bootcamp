/*
Write a Recursive Fibonacci Function that:
    1. Receives an "n" (INDEX)
    2. Returns the VALUE at INDEX "n"
*/

#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
    int num;
    printf("What Fibonacci Number would you like?: ");
    scanf("%d", &num);
    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));
    return 0;
}