/*
Write down a recursive funciton that gets an integer (int n)
Return 1 if the sum of all the numbers in the received value is EVEN
Otherwise return 0

Example 1:
    n = 156 ==> 1 + 5 + 6 = 12 RETURN 1

Example 2:
    n = 36859 ==> 3 + 6 + 8 + 5 + 9 = 31 RETURN 0
*/

#include <stdio.h>
#include <stdlib.h>


int checkForEvenDigitSum(int n)
{
    int currentResult;
    if (n < 10) {
        return (n % 2 == 0) ? 1 : 0;
    }
    else {
        currentResult = checkForEvenDigitSum(n / 10);
        if (n % 2 == 0) {
            return (currentResult == 1 ? 1 : 0);
        }
        return (currentResult == 1) ? 0 : 1;
    }
}

// checkForEvenDigitSumOptimized
// Optimisation from courses' run through using ternary operators.
int checkForEvenDigitSumOptimized(int n)
{
    if (n < 1)
        return n % 2 ? 0 : 1;
    return n % 10 % 2 ? !checkForEvenDigitSumOptimized(n / 10) : checkForEvenDigitSumOptimized(n/10);
}



int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    int parity = checkForEvenDigitSumOptimized(n);
    if (parity == 1)
        printf("The sum of digits of %d are EVEN\n", n);
    else 
        printf("The sum of digits of %d are ODD\n", n);
    parity = checkForEvenDigitSum(n);
    printf("\n\nOptimised Method: \n");
    if (parity == 1)
        printf("The sum of digits of %d are EVEN\n", n);
    else 
        printf("The sum of digits of %d are ODD\n", n);
    return 0;
}
