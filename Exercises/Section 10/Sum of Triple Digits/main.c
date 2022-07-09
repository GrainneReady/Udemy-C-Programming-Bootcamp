/*
Write a Program that receives a number with 3 digits

The program should calculate the sum of digits in this number.
*/

#include <stdio.h>

int main() {
    int num, sum, numCopy;
    printf("Enter the number you want to sum the digits of: ");
    scanf("%d", &num);
    numCopy = num;
    for (int i = 0; numCopy > 0; i++)
    {
        sum += numCopy % 10;
        numCopy /= 10;
    }
    printf("The total sum of digits of %d is: %d", num, sum);
    return 0;
}