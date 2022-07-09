// Write a program that gets 3 grades (int) from the user
// The program should calculate and print the EXACT average
#include <stdio.h>

int main() {
    int grade1, grade2, grade3;
    double average;
    printf("Enter your first grade: ");
    scanf("%d", &grade1);
    printf("Enter your second grade: ");
    scanf("%d", &grade2);
    printf("Enter your third grade: ");
    scanf("%d", &grade3);
    average = ((double)(grade1 + grade2 + grade3) / 3);
    printf("Your average grade was: %.2lf\n", average);
    return 0;
}