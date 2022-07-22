#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height;
    double width;
    double area;
    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);
    area = height * width;
    printf("The area of the rectangle is: %.2lf\n", area);
}