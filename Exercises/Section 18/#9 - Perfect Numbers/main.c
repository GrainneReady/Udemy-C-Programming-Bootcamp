/*
Write a function that receives an integer "num".
The function should return 1 if "num" is a perfect number. Otherwise, return 0.

A "perfect" number is a number with a value equals to the sum of all of its divisor (not including the number itself)

Example: 6 ---> (1 + 2 + 3) = 6 (PERFECT NUMBER), RETURN 1
         12 ---> (1 + 2 + 3 + 4 + 6) = 16 (NOT PERFECT NUMBER), RETURN 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int sumOfDivisors(int num)
{
    int sum = 0;
    for (int currentDivisor = 1; currentDivisor <= sqrt(num); currentDivisor++)
    {
        if (currentDivisor == sqrt(num))
            sum += currentDivisor;
        else if (num % currentDivisor == 0) {
            sum += currentDivisor + (num / currentDivisor);
        }
    }
    return sum;
}


int isPerfect(int num)
{
    if (sumOfDivisors(num) - num == num)
        return 1;
    return 0;
}


int main()
{
    int num;
    printf("Enter a whole number to see if it is perfect or not (E.g. 6): ");
    scanf("%d", &num);
    char* isPerfectString = (isPerfect(num) ? "" : "not ");
    printf("%d is %sa Perfect Number\n", num, isPerfectString);
    return 0;
}
