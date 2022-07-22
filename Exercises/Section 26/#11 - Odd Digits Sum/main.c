/*
Write down a recursive funciton that gets an integer (int n)
Return 1 if the sum of all the numbers in the received value is ODD
Otherwise return 0

Example 1:
    n = 156 ==> 1 + 5 + 6 = 12 RETURN 0 (EVEN)

Example 2:
    n = 36859 ==> 3 + 6 + 8 + 5 + 9 = 31 RETURN 1 (ODD)
*/

#include <stdio.h>
#include <stdlib.h>


int checkForOddDigitSum(int n)
{
    if (n < 1)
        return n % 2 ? 1 : 0;
    return n % 10 % 2 ? checkForOddDigitSum(n / 10) : !checkForOddDigitSum(n/10);
}



int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    int parity = checkForOddDigitSum(n);
    printf("checkForOddDigitSum(n) = %d\n", parity);
    if (parity == 1)
        printf("The sum of digits of %d are ODD\n", n);
    else 
        printf("The sum of digits of %d are EVEN\n", n);
    return 0;
}
