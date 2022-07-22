/*
Lucas Sequence L(n)
Write a program that will calculate L(n) for some int "n"
E.g. n = 14  ===> 843
*/

#include <stdio.h>
#include <stdlib.h>


int lucasSequence(int n)
{
    if (n == 0)
        return 2;
    else if (n == 1)
        return 1;
    return lucasSequence(n - 1) + lucasSequence(n - 2);
    return (n == 1) ? 1 : lucasSequence(n - 1) + lucasSequence(n - 2);
}

int lucasNotRecursive(int n)  // The course's non-recursive solution:
{
    int i;
    int previous = 2;
    int current = 1;
    int temp;
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;

}


int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("Lucas Sequence L(%d) using Recursion: %d", n, lucasSequence(n));
    printf("\n\nLucas Sequence L(%d) without using Recursion: %d", n, lucasNotRecursive(n));
    return 0;
}