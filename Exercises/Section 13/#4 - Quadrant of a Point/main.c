/*
Write a program that receives a coordinate point in XY system.

The program should print in which quadrant the point is at
*/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("The coordinates (%d, %d) are in the 1st Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The coordinates (%d, %d) are in the 2nd Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The coordinates (%d, %d) are in the 3rd Quadrant.\n", x, y);
    else
        printf("The coordinates (%d, %d) are in the 4th Quadrant.\n", x, y);
    return 0;
}
