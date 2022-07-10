/*
Write a program that reads from the user 3 values of an "integer" type.
The program should print "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".

Note: There's more than just 1 "correct" solution for this question.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
        printf("EQUAL");
    else printf("NOT EQUAL");
}