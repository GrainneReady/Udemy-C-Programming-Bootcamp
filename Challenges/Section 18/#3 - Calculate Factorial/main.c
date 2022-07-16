/*
Write a function that:
    1. Receives a number.
    2. Calculates its Factorial.
    3. Returns the result
*/

#include <stdio.h>
#include <stdlib.h>


int calculateFactorial(int num)
{
    int answer = 1;
    for (int i = 1; i <= num; i++)
    {
        answer *= i;
    }
    return answer;
}


int main()
{
    int num, factorial;
    printf("What number do you want the factorial of?: ");
    scanf("%d", &num);
    factorial = calculateFactorial(num);
    printf("The factorial of %d is: %d", num, factorial);
    return 0;
}
