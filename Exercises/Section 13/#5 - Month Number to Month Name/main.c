/*
Write a program that receives a number representing a month (1-12) and prints the "month name".
*/
# include <stdio.h>
int main()
{
    int monthNum;
    printf("Enter the number of the month: ");
    scanf("%d", &monthNum);
    switch(monthNum)
    {
        case 1:
            printf("The 1st Month is January.\n");
            break;
        case 2:
            printf("The 2nd Month is February.\n");
            break;
        case 3:
            printf("The 3rd Month is March.\n");
            break;
        case 4:
            printf("The 4th Month is April.\n");
            break;
        case 5:
            printf("The 5th Month is May.\n");
            break;
        case 6:
            printf("The 6th Month is June.\n");
            break;
        case 7:
            printf("The 7th Month is July.\n");
            break;
        case 8:
            printf("The 8th Month is August.\n");
            break;
        case 9:
            printf("The 9th Month is September.\n");
            break;
        case 10:
            printf("The 10th Month is October.\n");
            break;
        case 11:
            printf("The 11th Month is November.\n");
            break;
        case 12:
            printf("The 12th Month is December.\n");
            break;
        default:
            printf("Error: %d is not a valid month number as it is not a number between 1 and 12 (inclusive).\n", monthNum);
            break;
    }
    return 0;
}
