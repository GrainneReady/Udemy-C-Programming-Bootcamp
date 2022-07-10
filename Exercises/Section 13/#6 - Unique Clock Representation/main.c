/*
Write a Program that receives an integer representing seconds.

The program should convert the given seconds into:
    1. Total Hours
    2. Total Minutes
    3. Remaining Seconds
And print the result in the following format:
    HH:MM:SS
*/

#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, remainingSeconds;
    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);
    remainingSeconds = totalSeconds;
    hours = remainingSeconds / 3600;
    remainingSeconds -= hours * 3600;
    minutes = remainingSeconds / 60;
    remainingSeconds -= minutes * 60;
    if (hours < 10)
        printf("0");
    printf("%d:", hours);
    if (minutes < 10)
        printf("0");
    printf("%d:", minutes);
    if (remainingSeconds < 10)
        printf("0");
    printf("%d\n", remainingSeconds);
    return 0;
}