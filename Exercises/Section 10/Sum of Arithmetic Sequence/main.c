/*
Write a program that calculates and prints Sn (Sum of the sequence)

The Program should read from the user:
    - n-th Element (an)
    - Initial Term (a1)
    - Total Terms (n)
*/

#include <stdio.h>

int main() {
    double nthElement, initialTerm, totalTerms, sumOfSequence;
    printf("Enter the n-th Element (an): ");
    scanf("%lf", &nthElement);
    printf("Enter the initial Term (a1): ");
    scanf("%lf", &initialTerm);
    printf("Enter the total Terms (n): ");
    scanf("%lf", &totalTerms);
    sumOfSequence = (initialTerm + nthElement) * (totalTerms / 2);
    printf("The sum of the sequence is: %.2lf", sumOfSequence);
    return 0;
}