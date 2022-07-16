#include <stdio.h>
#include <stdlib.h>

int sequenceOfNines(int length)
{
    long sequence = 0;
    for (int i = 0; i < length; i++)
    {
        sequence = sequence * 10 + 9;
    }
    return sequence;
}

int main()
{
    int length;
    printf("Enter a length for the sequence: ");
    scanf("%d", &length);
    long sequence = sequenceOfNines(length);
    printf("Sequence: \n%ld\n", sequence);
    return 0;
}