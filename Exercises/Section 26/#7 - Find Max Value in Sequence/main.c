/*
Write a recursive function that will get some natural number "num"
Read a sequence of "num" numbers from the user
Return the maximum value in the sequence
*/

#include <stdio.h>
#include <stdlib.h>


int findMax(int n)
{
    int userNum, currentMax;
    printf("Enter a value for the sequence: ");
    scanf("%d", &userNum);
    if (n > 1) {
        currentMax = findMax(n - 1);
        return (currentMax > userNum) ? currentMax : userNum;
    }
    return userNum;
}


int main()
{
    int n;
    printf("Enter n (the amount of numbers you want in the sequence): ");
    scanf("%d", &n);
    printf("\nThe maximum number from the %d provided numbers is: %d", n, findMax(n));
    return 0;
}