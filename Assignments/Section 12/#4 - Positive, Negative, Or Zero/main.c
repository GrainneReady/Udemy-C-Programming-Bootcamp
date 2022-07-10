/*
Write a program that reads an input number from the user.
The program should print "1" if the value is positive, "-1" if it's negative, and "0" if it equals to zero.
*/
#include <stdio.h>

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num == 0)
        printf("0");
    else if (num > 0)
        printf("1");
    else 
        printf("-1");

    return 0;
}