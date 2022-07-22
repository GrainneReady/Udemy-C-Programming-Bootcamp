/*
Write a recursive function that receives an integer num.
The function should observe the digits (from left to right) and return:
    -  1, if they are very Ascending
    - -1, if they are very Descending
    -  0, for neither

Examples:
    123456 ==> RETURN 1  (Very Ascending)
    654321 ==> RETURN -1 (Very Descending)
    937852 ==> RETURN 0  (Neither)
*/

#include <stdio.h>
#include <stdlib.h>


int checkAscendingOrDescending(int num)
{
    if (num >= 10)
    {
        int nextDigit = (num / 10) % 10;
        int currentDigit = num % 10;
        int nextDigitType = checkAscendingOrDescending(num/10);
        if (currentDigit > nextDigit)
        {
            return (nextDigitType != -1 && nextDigitType != 0) ? 1 : 0;
        }
        else if (currentDigit < nextDigit)
        {
            return (nextDigitType != 1 && nextDigitType != 0) ? -1 : 0;
        }
        return 0;
    }    
}


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int type = checkAscendingOrDescending(num);
    if (type == 1)
        printf("%d's digits are Very Ascending.\n", num);
    else if (type == -1)
        printf("%d's digits are Very Descending.\n", num);
    else if (type == 0)
        printf("%d's digits are neither Very Ascending nor Very Descending.\n", num);
    else
        printf("Return Value: %d\nWas there a mistake? ", type);
    return 0;
}