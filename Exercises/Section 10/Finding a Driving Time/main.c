/*
A vehicle leaves from city A to city B.

You know the distance from A to B as well a the speed the vehicle is going to drive.

So you have to initialize the distance and speed

Then you have to find out how long it will take the car to reach city B from city A and print this result to the screen
*/
#include <stdio.h>
#include <math.h>

int main() {
    double distance, speed, totalTime, minutes;
    int hours;
    printf("Enter the distance from point A to point B: ");
    scanf("%lf", &distance);
    printf("Enter the speed the vehicle will be at: ");
    scanf("%lf", &speed);
    totalTime = distance / speed;
    hours = floor(totalTime);
    minutes = (60 * (totalTime - hours));
    printf("It will take %d hours and %.2lf minutes to reach the destination.\n", hours, minutes);
    return 0;
}