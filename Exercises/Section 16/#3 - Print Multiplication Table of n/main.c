/*
Write a program that receives an integer and prints its multiplication table.
    1. 3 * 1 = 3
    2. 3 * 2 = 6
    3. 3 * 3 = 9
    ..
    10. 3 * 10 = 30
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max;
    printf("Enter a number you want the multiplication table of: ");
    scanf("%d", &num);
    printf("Enter the maximum number you want to multiply the number by: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}