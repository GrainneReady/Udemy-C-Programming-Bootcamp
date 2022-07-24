/*
Course: C Programming Bootcamp - The Complete C Language Course by Vlad Budnitski and AlphaTech
Course Link: https://www.udemy.com/share/103bNj3@uFG5sscUPj8wYZbsOnRDOwecWJVKgysNwAyfWFhrmSZ81zsHKZC_YMEmI6ogJXpRNw==/
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct date{
    int day;
    int month;
    int year;
}Date;


void printDate(Date dt)
{
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}


Date inputDate()
{
    Date dt;
    printf("Enter day (1-31): ");
    scanf("%d", &dt.day);
    printf("Enter month (1-12): ");
    scanf("%d", &dt.month);
    printf("Enter year (yy): ");
    scanf("%d", &dt.year);
    return dt;
}


void printNextDay(Date dt)
{
    // This takes leap years, and the number of days in each month into account, which the course's solution doesn't take into account.
    int daysInMonth;
    if (dt.day > 0 && dt.day <= 31 && dt.month > 0 && dt.month >= 12 && dt.year >= 0) {
        switch(dt.month)
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
                if (dt.year % 4 == 0)
                    if (dt.year % 400 == 0)
                        daysInMonth = 29;
                    else if (dt.year % 100 == 0)
                        daysInMonth = 28;
                    else
                        daysInMonth = 29;
                else
                    daysInMonth = 28;
                break;
            default:
                printf("ERROR: Incorrect month number. %d is not a whole number between 1 and 12 inclusive", dt.month);
        }
        if (dt.day == daysInMonth) {
            if (dt.month == 12) {
                dt.year++;
                dt.month = 1;
            } else
                dt.month++;
            dt.day = 0;
        }
        dt.day++;
        printf("Next Day: \n");
        printDate(dt);
    }
    else printf("printNextDay Function ERROR: The Inputted Date (%d/%d/%d) is invalid.\n", dt.day, dt.month, dt.year);
}


int main()
{
    Date todaysDate = {-4,12,2009};
    printf("Current Date: \n");
    printDate(todaysDate);
    printNextDay(todaysDate);
    return 0;
}