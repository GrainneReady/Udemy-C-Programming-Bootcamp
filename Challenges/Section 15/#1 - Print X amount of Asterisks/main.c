/*
Write a program that gets a "number of asterisks".

The program should print to the screen the specified number of asterisks
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfAsterisks, i = 0;
    printf("How many asterisks do you want to have?: ");
    scanf("%d", &numOfAsterisks);

    while (i < numOfAsterisks) {
        printf("*");
        i++;
    }
    return 0;
}