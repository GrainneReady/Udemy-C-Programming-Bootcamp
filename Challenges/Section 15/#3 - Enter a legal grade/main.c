/*
Write a program that receives as input a "valid" grade:
    1. Greater than 0.
    2. Less than 100.

The program should print a corresponding message with the grade itself.
Example: "Thanks! You've inserted 90, which is a legit grade!"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade = 0;
    do {
        printf("Enter a grade: ");
        scanf("%d", &grade);
        if (grade <= 0)
            printf("Oh no! %d%% an illegal grade. It has to be greater than 0. Try again?\n", grade);
        else if (grade >= 100)
            printf("Oh no! %d%% is an illegal grade. It has to be less than 100. Try again?\n", grade);
    }while (grade <= 0 || grade >= 100);
    printf("Thanks! You've inserted %d%%, which is a legit grade!\n", grade);
    return 0;
}