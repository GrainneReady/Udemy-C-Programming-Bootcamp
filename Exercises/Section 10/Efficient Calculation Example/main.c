/*
A Program that receives an integer "X".
The program should calculate and print:
    1. x^2
    2. x^4
    3. x^6
    4. x^8
*/
#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter the value for x: ");
    scanf("%d", &x);
    for (int i = 2; i <= 8; i+=2)
    {
        printf("x^%d: %.0lf\n", i, pow(x, i));
    }
    return 0;
}