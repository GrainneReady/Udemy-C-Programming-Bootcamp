/*
Write a recursive function that will receive an integer value "num"
Read a sequence of numbers from the user up until the user enters '-1'
Return the total numbers smaller than the num value
*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 5


int numbersLessThanN(int n)
{
    int currentNum;
    printf("Enter the next element: ");
    scanf("%d", &currentNum);
    if (currentNum != -1) {
        if (currentNum < n) {
            printf("%d is less than %d\n", currentNum, n);
            return 1 + numbersLessThanN(n - 1);
        }
        return numbersLessThanN(n - 1);
    }
    return 1;
}

int main()
{
    int amountLessThanN = numbersLessThanN(NUM);
    printf("The total numbers less than %d is: %d", NUM, amountLessThanN);
    return 0;
}