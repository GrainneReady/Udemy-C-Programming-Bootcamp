#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1, grade2;
    printf("Enter grade #1: ");
    scanf("%d", &grade1);
    printf("Enter grade #2: ");
    scanf("%d", &grade2);

    printf("\nGrade 1 VALUE: %d\n", grade1);
    printf("Grade 1 ADDRESS: %p\n", &grade1);

    printf("\nGrade 2 VALUE: %d\n", grade2);
    printf("Grade 2 ADDRESS: %p\n", &grade2);

}