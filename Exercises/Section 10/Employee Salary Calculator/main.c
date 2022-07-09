/*
Write a program that receives:
    1. Salary (per hours)
    2. Total hours worked (in a month)

The program should calculate and print the total monthly salary of the employee
*/
#include <stdio.h>

int main() {
    double hourlySalary, hoursWorkedThisMonth, monthlySalary;
    printf("Enter the hourly salary of employee: ");
    scanf("%lf", &hourlySalary);
    printf("Enter the total amount of hours worked by the employee for a month: ");
    scanf("%lf", &hoursWorkedThisMonth);
    monthlySalary = hourlySalary * hoursWorkedThisMonth;
    printf("The monthly salary of the employee is $%.2lf", monthlySalary);
    return 0;
}