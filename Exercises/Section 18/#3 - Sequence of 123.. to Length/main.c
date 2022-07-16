#include <stdio.h>
#include <stdlib.h>

int sequenceOfOneToLength(int length)
{
    long num = 0;
    if (length > 9)
        return -1;
    for (int i = 1; i <= length; i++)
    {
        num = num * 10 + i;
    }
    return num;
}

int main() {
    int length, correctLengthGiven = 0;
    do {
        printf("Enter the length of the sequence (MAX = 9): ");
        scanf("%d", &length);
        if (length <= 9 && length >= 1)
            correctLengthGiven = 1;
        else
            printf("%d is not a proper length (Has to be between 1 and 9 inclusive). Try again?: ");
    } while (correctLengthGiven != 1);
    long sequence = sequenceOfOneToLength(length);
    printf("Sequence: \n%ld", sequence);
}