/*
Write a program that receives an integer value and prints its absolute value.

    1. -10 -> |10|
    2. 5 -> |5|
    3. -313 -> |313|
*/

#include <stdio.h>

int main()
{
    int absNum, originalNum;
    printf("Enter the number you want the absolute value of: ");
    scanf("%d", &originalNum);
    absNum = originalNum;
    if (originalNum < 0)
        absNum *= -1;
    printf("The absolute value of %d is: |%d|", originalNum, absNum);
    return 0;
}