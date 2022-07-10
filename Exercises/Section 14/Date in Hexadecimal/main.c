/*
Write a program that should receive from the user 3 values:
  - Year
  - Month
  - Day

The program should then print the date in Hexadecimal Format
For Example: day = 20    | day = 0x14
             month = 8   | month = 0x8
             year = 2012 | year = 0x7DC
*/

#include <stdio.h>

int main()
{
    int year, month, day;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Day = 0x%X \nMonth = 0x%x \nYear = 0x%X \n", day, month, year);
    return 0;
}