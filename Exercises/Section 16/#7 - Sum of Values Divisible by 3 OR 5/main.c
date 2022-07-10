/*
Write an EFFICIENT Program that receives a "num" from the user.

The program should calculate and print the SUM of all the numbers from "1" up to "num" that can be divided by 3 OR by 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, max;
    printf("Enter the maximum number that you want to sum numbers divided by 3 or 5 up to: ");
    scanf("%d", &max);

    for (int i = 3; i <= max; i += 3) {
        sum += i;
        printf("%d is divisible by 3\n", i);
    }
    for (int i = 5; i <= max; i += 5) {
        if (i % 3 != 0)
            sum += i;
        printf("%d is divisible by 5\n", i);
    }
    printf("The sum of all numbers divisible by 3 or 5 up to %d is: %d", max, sum);
    return 0;
}