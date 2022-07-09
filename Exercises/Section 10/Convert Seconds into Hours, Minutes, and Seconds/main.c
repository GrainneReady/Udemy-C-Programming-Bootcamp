/*
Write a Program that receives an integer representing seconds.

The program should convert the given seconds into:
    1. Total Hours
    2. Total Minutes
    3. Remaining Seconds
*/
#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    seconds -= hours * 3600 + minutes * 60;
    printf("Hours: %d \nMinutes: %d \nSeconds: %d", hours, minutes, seconds);
    return 0;
}