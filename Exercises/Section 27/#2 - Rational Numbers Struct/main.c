/*
Rational Numbers
Design and develop a rational nubmer struct, called Rational.
A rational number consists of two parts:
    1. Numerator
    2. Denominator
Example: 1/3, 2/5, 7/8, ...
Provide increment, decrement, addition, subtraction, multiplication, division, smaller, bigger, equal, and not equal functions
to make rational / mathematical operations on variables of a rational type.

Write a "main functon" to check out the correctness of your functions.
Print the results before and after any operation that you do.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct rationalNumber{
    int numerator;
    int denominator;
}RationalNumber;


void incrementRationalNumber(RationalNumber* ratNum)
{
    (*ratNum).numerator += (*ratNum).denominator;
}


void decrementRationalNumber(RationalNumber* ratNum)
{
    (*ratNum).numerator -= (*ratNum).denominator;
}


RationalNumber addition(RationalNumber r1, RationalNumber r2)
{
    RationalNumber r3;
    r3.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    r3.denominator = r1.denominator * r2.denominator;
    return r3;
}

RationalNumber subtraction(RationalNumber r1, RationalNumber r2)
{
    RationalNumber r3;
    r3.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
    r3.denominator = r1.denominator * r2.denominator;
    return r3;
}


RationalNumber multiplication(RationalNumber r1, RationalNumber r2)
{
    RationalNumber r3;
    r3.numerator = r1.numerator * r2.numerator;
    r3.denominator = r1.denominator * r2.denominator;
    return r3;
}

RationalNumber division(RationalNumber r1, RationalNumber r2)
{
    RationalNumber r3;
    r3.denominator = r1.denominator * r2.numerator;
    r3.numerator = r1.numerator * r2.denominator;
    return r3;
}


int isRationalBigger(RationalNumber r1, RationalNumber r2)
{
    // Set to double to avoid int's rounding
    double result = ((double) r1.numerator / r1.denominator) - ((double) r2.numerator / r2.denominator);
    if (result > 0)
        return 1;
    return 0;
}


int isRationalSmaller(RationalNumber r1, RationalNumber r2)
{
    // Set to double to avoid int's rounding
    double result = ((double) r1.numerator / r1.denominator) - ((double) r2.numerator / r2.denominator);
    if (result < 0)
        return 1;
    return 0;

}


int isRationalEqual(RationalNumber r1, RationalNumber r2)
{
    // Set to double to avoid int's rounding
    double result = ((double) r1.numerator / r1.denominator) - ((double) r2.numerator / r2.denominator);
    if (result == 0)
        return 1;
    return 0;
}


int isRationalNotEqual(RationalNumber r1, RationalNumber r2)
{
    // Set to double to avoid int's rounding
    double result = ((double) r1.numerator / r1.denominator) - ((double) r2.numerator / r2.denominator);
    if (result != 0)
        return 1;
    return 0;
}


int main()
{
    RationalNumber r1 = {3, 5}, r2 = {2, 7}, r3;
    int result;
    printf("INCREMENTATION OF RATIONAL NUMBER 1\nBefore: %d/%d\n", r1.numerator, r1.denominator);
    incrementRationalNumber(&r1);
    printf("After: %d/%d\n\n", r1.numerator, r1.denominator);

    printf("DECREMENTATION OF RATIONAL NUMBER 1\nBefore: %d/%d\n", r1.numerator, r1.denominator);
    decrementRationalNumber(&r1);
    printf("After: %d/%d\n\n", r1.numerator, r1.denominator);

    printf("ADDITION OF RATIONAL NUMBER 1 AND 2\nBefore: R1 = %d/%d  |  R2 = %d/%d |\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    r3 = addition(r1, r2);
    printf("After:  R1 = %d/%d  |  R2 = %d/%d | RESULT = %d/%d\n\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator, r3.numerator, r3.denominator);

    printf("SUBTRACTION OF RATIONAL NUMBER 1 AND 2\nBefore: R1 = %d/%d  |  R2 = %d/%d |\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    r3 = subtraction(r1, r2);
    printf("After:  R1 = %d/%d  |  R2 = %d/%d | RESULT = %d/%d\n\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator, r3.numerator, r3.denominator);

    printf("MULTIPLICATION OF RATIONAL NUMBER 1 AND 2\nBefore: R1 = %d/%d  |  R2 = %d/%d |\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    r3 = multiplication(r1, r2);
    printf("After:  R1 = %d/%d  |  R2 = %d/%d | RESULT = %d/%d\n\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator, r3.numerator, r3.denominator);

    printf("DIVISION OF RATIONAL NUMBER 1 AND 2\nBefore: R1 = %d/%d  |  R2 = %d/%d |\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    r3 = division(r1, r2);
    printf("After:  R1 = %d/%d  |  R2 = %d/%d | RESULT = %d/%d\n\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator, r3.numerator, r3.denominator);

    printf("IS R1 %d/%d == R2 %d/%d?\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    result = isRationalEqual(r1, r2);
    if (result == 1)
        printf("Answer: Yes\n\n");
    else printf("Answer: No\n\n");

    printf("IS R1 %d/%d != R2 %d/%d?\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    result = isRationalNotEqual(r1, r2);
    if (result == 1)
        printf("Answer: Yes\n\n");
    else printf("Answer: No\n\n");

    printf("IS R1 %d/%d > R2 %d/%d?\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    result = isRationalBigger(r1, r2);
    if (result == 1)
        printf("Answer: Yes\n\n");
    else printf("Answer: No\n\n");

    printf("IS R1 %d/%d < R2 %d/%d?\n", r1.numerator, r1.denominator, r2.numerator, r2.denominator);
    result = isRationalSmaller(r1, r2);
    if (result == 1)
        printf("Answer: Yes\n\n");
    else printf("Answer: No\n\n");
    return 0;
}