/*
Write a program that checks if a given year is a Leap Year.

Conditions:
  - If the year can be divided by 4 without a remainder
  - If the year can also be divided by 100 (without a remainder) -> then it's NOT a leap year
  - UNLESS the year can be divided by 400 -> then it's a leap year.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
        if (year % 400 == 0)
            printf("%d is a Leap Year.\n", year);
        else if (year % 100 == 0)
            printf("%d is not a Leap Year.\n", year);
        else
            printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);
    return 0;
}