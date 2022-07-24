/*
Write a simple program that will create a structure called point that has two number variables (x, y).
Declare a point structure in main.
Ask the user to enter the values for both x and y in main and then print the point in the format "(x, y)".

Then, create a structure called date that has three int variables (day, month, year).
Declare a date structure in main.
Ask the user to enter the values for day, month, and year in main and then print the date in the format "day/month/year".


Course: C Programming Bootcamp - The Complete C Language Course by Vlad Budnitski and AlphaTech
Course Link: https://www.udemy.com/share/103bNj3@uFG5sscUPj8wYZbsOnRDOwecWJVKgysNwAyfWFhrmSZ81zsHKZC_YMEmI6ogJXpRNw==/
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    float x;
    float y;
}Point;


typedef struct date{
    int day;
    int month;
    int year;
}Date;


int main()
{
    /*
    struct point myPoint; // Initialising point without typedef
    printf("Enter x coordinate of the Point: ");
    scanf("%d", &myPoint.x);
    printf("Enter y coordinate of the Point: ");
    scanf("%d", &myPoint.y);
    printf("The Point is at coordinates (%d, %d).\n", myPoint.x, myPoint.y);
    */
    Date myDate;  // Initialising date with typedef
    printf("Enter day number: ");
    scanf("%d", &myDate.day);
    printf("Enter month number: ");
    scanf("%d", &myDate.month);
    printf("Enter year number: ");
    scanf("%d", &myDate.year);
    printf("The Entered Date is %d/%d/%d.\n", myDate.day, myDate.month, myDate.year);
    return 0;
}