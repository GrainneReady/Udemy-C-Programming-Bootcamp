/*
Write a recursive function that will get some natural number "num"
Read a sequence of "num" numbers from the user
Return the minimum value in the sequence
*/

#include <stdio.h>
#include <stdlib.h>


int findMin(int n)
{
    int userNum, currentMin;
    printf("Enter a value for the sequence: ");
    scanf("%d", &userNum);
    if (n > 1) {
        currentMin = findMin(n - 1);
        return (currentMin > userNum) ? userNum : currentMin;
    }
    return userNum;
}


int main()
{
    int n;
    printf("Enter n (the amount of numbers you want in the sequence): ");
    scanf("%d", &n);
    printf("\nThe minimum number from the %d provided numbers is: %d", n, findMin(n));
    return 0;
}