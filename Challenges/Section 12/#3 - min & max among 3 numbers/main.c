/*
Write a program that gets 3 numbers and find out the maximum and minimum between them

For Example:
  a) 5, 3, 7 - "Maximum is 7, Minimum is 3"
  b) 2, 5, 1 - "Maximum is 5, Minimum is 1"
*/

#include <stdio.h>

int main()
{
    int num1, num2, maximum, minimum;
    printf("Enter the first number: ");
    scanf("%d", &minimum);
    printf("Enter the second number: ");
    scanf("%d", &num1);
    printf("Enter the third number: ");
    scanf("%d", &num2);
    if (num1 > maximum)
        maximum = num1;
    if (num2 > maximum)
        maximum = num2;
    if (minimum > maximum)
        maximum = minimum;
    if (num1 < minimum)
        minimum = num1;
    if (num2 < minimum)
        minimum = num2;
    printf("Maximum is %d, Minimum is %d\n", maximum, minimum);
    return 0;
}