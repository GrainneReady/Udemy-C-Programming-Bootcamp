/*
Write a recursive function that finds a Pell Number in a sequence of pell numbers
Parameters: int n (for P(n))
Pn = 0 if n = 0
Pn = 1 if n = 1
Pn = 2 * P(n-1) + P(n-2) if n > 1
*/

#include <stdio.h>
#include <stdlib.h>

int pellNumber(int n)
{
    if (n == 0)
        return 0;
    return (n == 1) ? 1 : 2 * pellNumber(n - 1) + pellNumber(n - 2);
}

int pellNumberNonRecursive(int n)
{
    int pellNMinus1 = 1, pellNMinus2 = 0, current;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        current = 2 * pellNMinus1 + pellNMinus2;
        pellNMinus2 = pellNMinus1;
        pellNMinus1 = current;
    }
    return current;
}

int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("\n\n(Recursive Method) \nThe pell number P(%d) = %d", n, pellNumber(n));
    printf("\n\n(Non-Recursive Method) \nThe pell number P(%d) = %d", n, pellNumberNonRecursive(n));
    return 0;
}