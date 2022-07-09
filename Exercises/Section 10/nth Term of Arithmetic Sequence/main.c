/*
Write a Program that calculates and prints: an (the n-th term of the sequence)
*/
#include <stdio.h>

int main() {
    double difference, firstTerm, nthTerm;
    int termToCalculate;
    printf("Enter the difference between terms in the Arithmetic Sequence (d): ");
    scanf("%lf", &difference);
    printf("Enter the value of the first term (a1): ");
    scanf("%lf", &firstTerm);
    printf("Enter the term number you wish to calculate (an): ");
    scanf("%d", &termToCalculate);
    nthTerm = (double)(firstTerm + (double)(termToCalculate - 1) * difference);
    printf("The n-th term of the Arithmetic Sequence is: %.2lf", nthTerm);
    return 0;
}