/*
Calculate the Area of a Rectnagle
    1. Receive "Height" and "Width"
    2. Calculate and return the AREA
*/

#include <stdlib.h>
#include <stdio.h>


int getAreaOfRectangle(double width, double height)
{
    return width * height;
}


int main()
{
    double width, height, area;
    printf("Enter width of rectangle: ");
    scanf("%lf", &width);
    printf("Enter height of rectangle: ");
    scanf("%lf", &height);
    area = getAreaOfRectangle(width, height);
    printf("The area of the rectangle is: %.2lf\n", area);
    return 0;
}

