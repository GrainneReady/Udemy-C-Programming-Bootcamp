/*
Write a program that reads from the user a "three-digit" integer value.
The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right).
If not, the program should print "NOT ASCENDING".

For example:
  Input: 137 --> ASCENDING (1<3<7)
  Input: 143 --> NOT ASCENDING.

*/
#include <stdio.h>

int main()
{
    int digit1, digit2, digit3, num;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    num /= 10;
    digit3 = num;
    if (digit1 > digit2 && digit2 > digit3)
        printf("ASCENDING (%d < %d < %d)\n.", digit3, digit2, digit1);
    else printf("NOT ASCENDING (%d >= %d >= %d).\n", digit3, digit2, digit1);
    return 0;
}