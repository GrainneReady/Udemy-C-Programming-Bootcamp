/*
Write a function that receives an integer num.
The function should calculate and return its SUM OF DIVISORS.
A "divisor" of "num" is considered to be a number that <<< "num" % "divisor" = 0 >>>
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

int main()
{
    int num;
    printf("Enter a number to calculate the sum of divisors of: ");
    scanf("%d", &num);
    printf("Sum of Divisors of %d: %d\n", num, sumOfDivisors(num));
    return 0;
}