/*
Write a Program that receives a number with 3 digits.

The program should print the reversed number of "num".
*/
#include <stdio.h>

int main() {
    int num, reversal, numCopy;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &num);
    numCopy = num;
    for (int i = 0; numCopy > 0; i++)
    {
        reversal *= 10;
        reversal += numCopy % 10;
        numCopy /= 10;
    }
    printf("The reverse of %d is: %d", num, reversal);
    return 0;
}