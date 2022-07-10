/*
Write a program that reads from the user 2 values of an "integer" type.
The program should print "EQUAL" if both the values are equal. Otherwise, the program should print "NOT EQUAL".
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 == num2) printf("EQUAL\n");
    else printf("NOT EQUAL\n");
}