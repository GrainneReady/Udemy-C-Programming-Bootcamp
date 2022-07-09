/*
Write a program that calculates the distance between 2 points
sqrt((x1 - x2)^2 + (y1 - y2)^2)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Enter the value for x1: ");
    scanf("%f", &x1);
    printf("Enter the value for y1: ");
    scanf("%f", &y1);

    printf("Enter the value for x2: ");
    scanf("%f", &x2);
    printf("Enter the value for y2: ");
    scanf("%f", &y2);

    distance =  sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is: %lf\n", x1, y1, x2, y2, distance);
    return 0;
}