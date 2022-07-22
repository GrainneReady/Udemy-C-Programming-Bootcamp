#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear;
    int age;
    int birthYear;
    scanf("%d", &currentYear);
    scanf("%d", &age);
    birthYear = currentYear - age;
    printf("Year you were Born: %d\n", birthYear);
    return 0;
}