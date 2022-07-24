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


int main()
{
    Date graduationDate, todaysDate;
    graduationDate = inputDate();
    todaysDate = inputDate();
    printDate(graduationDate);
    printDate(todaysDate);
    return 0;
}