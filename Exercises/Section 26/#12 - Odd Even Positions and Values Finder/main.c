/*
Write a recursive function that gets some natural number "n"
Return 1 if every digit at an even position has an even value, as well as
  every odd digit has an odd value
Else return 0

Example 1:
    n = 36435 ==> RETURN 0

Example 2:
    n = 9652  ==> RETURN 0
*/

#include <stdio.h>
#include <stdlib.h>

int evenOddPositionSameAsValues(int n)
{
    if (n < 10) {
        return (n % 2 == 0) ? 1 : 0;
    }
    if (n < 100) {
        return((n % 10 % 2 == 0) && (n / 10 % 2 == 1)) ? 1 : 0;
    }
    return ((n % 10 % 2 == 0) && (n / 10 % 10 % 2 == 1)) ? evenOddPositionSameAsValues(n / 100) : 0;
}



int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("%d", evenOddPositionSameAsValues(n));
    return 0;
}