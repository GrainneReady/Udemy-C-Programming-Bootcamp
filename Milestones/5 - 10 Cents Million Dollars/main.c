/*
SECTION 15
start off with 1 cent which doubles every day, or 1 million right now?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cash = 0.01;
    printf("Starting off with: $%.2f\n", cash);
    for (int i = 1; i <= 30; i++)
    {
        cash *= 2;
        printf("Day %d: $%.2f\n", i, cash);
    }
    printf("After 30 days, $0.01 will turn into $%.2f\n", cash);
    return 0;
}
