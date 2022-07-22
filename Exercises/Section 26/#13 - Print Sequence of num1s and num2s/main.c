/*
Write a recursive function that receives:
    - an integer value "total".
    - an integer value "num1".
    - an integer value "num2".

The function should print a sequence of "total" num1's and then a sequence of "total" num2's

Examples:
    "total = 3, num1 = 2, num2 = 4" --> 222444
    "total = 2, num1 = 3, num2 = 5" --> 3355
*/

#include <stdio.h>
#include <stdlib.h>


void sequenceOfNum1AndNum2(int total, int num1, int num2)
{
    if (total >= 1)
    {
        printf("%d", num1);
        sequenceOfNum1AndNum2(total - 1, num1, num2);
        printf("%d", num2);
    }
}


int main()
{
    int total, num1, num2;
    printf("Enter the total times to print each number: ");
    scanf("%d", &total);
    printf("Enter the value for number 1 (num1): ");
    scanf("%d", &num1);
    printf("Enter the value for number 2 (num2): ");
    scanf("%d", &num2);
    sequenceOfNum1AndNum2(total, num1, num2);
    return 0;
}