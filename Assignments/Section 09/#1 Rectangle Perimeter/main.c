#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height, width, perimeter;
    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);
    perimeter = 2 * (height + width);
    printf("The perimeter of the rectangle is: %lf\n", perimeter);
}