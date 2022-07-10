/*
SECTION 15
Develop a unique Average Grade Calculator.

The calculator should receive grades from the user - until a "stopping condition" is met.
    *Stopping condition: grade = -1

The program should calculate the average grade and print it.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentGrade = 0, sum = 0, numOfGrades = -1, averageGrade;
    while (currentGrade != -1) {
        printf("Enter a grade (or enter -'1' to quit and compute the average): ");
        scanf("%d", &currentGrade);
        sum += currentGrade;
        numOfGrades++;
    }
    averageGrade = sum / numOfGrades;
    printf("The average grade from the %d given grades was calculated to be: %d%%", numOfGrades, averageGrade);
    return 0;
}
