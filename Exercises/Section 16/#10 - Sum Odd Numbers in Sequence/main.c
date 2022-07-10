/*
Write a program that receives "n" from the user (integer)
Then, Receive/Read "n" values from the user (integer)
Calculate the sum of all of the values of n which were odd.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, currentVal, nReceived = 0;
    do {
        printf("Enter the number of values 'n' that is in your sequence: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Error: %d is not a positive whole number. Try again?\n", n);
        else
            nReceived = 1;

    } while (nReceived != 1);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &currentVal);
        if (currentVal % 2 == 1)
            sum += currentVal;
    }

    printf("Sum of All Odd Values = %d\n", sum);

    return 0;
}