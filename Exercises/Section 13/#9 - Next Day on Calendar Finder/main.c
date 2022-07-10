/*
Write a program that receives a day, month, and a year.
The program should find and print the next day on the calendar.
*/

#include <stdio.h>

int main()
{
    int day, month, year, daysInMonth;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (year % 4 == 0)
                if (year % 400 == 0)
                    daysInMonth = 29;
                else if (year % 100 == 0)
                    daysInMonth = 28;
                else
                    daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            printf("Error: Incorrect month number. %d is not a whole number between 1 and 12 inclusive", month);
    }

    if (day == daysInMonth) {
        if (month == 12) {
            year++;
            month = 1;
        } else
            month++;
        day = 0;
    }
    day++;
    printf("%d/%d/%d", day, month, year);
    return 0;
}