/*
Write 2 functions:
    - Function #1 - Gets a point variable and prints its information
    - Function #2 - Responsible for getting a point input from the user and then returning it.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    float x;
    float y;
}Point;


void printPoint(Point pt) {
    printf("Point: (%.2f, %.2f)\n", pt.x, pt.y);
    /* Uncomment for different formatting
    printf("Point x: %.2f\n", pt.x);
    printf("Point y: %.2f\n", pt.y);
    */
}


Point inputPoint()
{
    Point pt;
    printf("Enter x coordinate: ");
    scanf("%f", &pt.x);
    printf("Enter y coordinate: ");
    scanf("%f", &pt.y);
    return pt;
}


int main()
{
    Point point = inputPoint();;
    printPoint(point);
    return 0;
}