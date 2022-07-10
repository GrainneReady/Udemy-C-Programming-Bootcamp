/*
Write an EFFICIENT Program that receives a "num" from the user.

The program should calculate and print the SUM of all the numbers from "1" up to "num" that can be divided by 3 AND by 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, max;
    printf("Enter the maximum number that you want to sum numbers divided by 3 and 5 up to: ");
    scanf("%d", &max);

    for (int i = 15; i <= max; i += 15)
    {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d is divisible by both 3 and 5.\n", i);
            sum += i;
        }
    }
    printf("The sum of all numbers divisible by 3 and 5 up to %d is: %d", max, sum);
    return 0;
}