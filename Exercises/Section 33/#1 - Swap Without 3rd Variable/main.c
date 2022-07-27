/*
IMPORTANT NOTE:
Section 33 of this course is considered as "Optional"
The structure of these exercises is different to the other sections, where instead of being prompted a question and creating a solution, the exercise is kindly ran through line by line
by the course instructor. I did not create nor will I take credit for this solution, all credit goes to the course and their fantastic instructor Vlad Budnitski.
Course Link: https://www.udemy.com/share/103bNj3@PzuBNfy9sgEK1bVy6MZoiFdrzCwyHpbw5SOVrW5DGiVrObtV6j0RBf4RVM0wOooGUQ==/
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20;
    printf("Before Swap: \nA = %d\nB = %d\n\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("After Swap: \nA = %d\nB = %d\n", a, b);
}