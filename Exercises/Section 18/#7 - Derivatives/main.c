/*
Write a function that finds the derivative given the following formula:
    (c*x^n)` = n * c * x ^ (n - 1)

Example:
    c = 4, x = 2, n = 3
    3 * 4 * 2^(2) = 3 * 4 * 4 = 48"
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float derivative(float c, float x, float n)
{
    float xByExponent = pow(x, n - 1);
    return n * c * xByExponent;
}

int main()
{
    float c, x, n;
    printf("Enter a value for c: ");
    scanf("%f", &c);
    printf("Enter a value for x: ");
    scanf("%f", &x);
    printf("Enter a value for n: ");
    scanf("%f", &n);
    printf("Exponent of %.2f * %.2f^(%.2f) = %.2f\n", c, x, n, derivative(c, x, n));
    return 0;
}