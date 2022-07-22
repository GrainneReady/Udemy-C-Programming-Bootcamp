/*
2. Write a program that gets from the user a temperarture ("double") in Fahrenheit Degrees.
    The program should calculate and convert the temperature from Fahrenheit Degrees to Celsius Degrees and print it.
*/

#include <stdio.h>

int main()
{
    double userTemperature, userCelsiusConversion;
    printf("Enter a temperature in °f: ");
    scanf("%lf", &userTemperature);
    userCelsiusConversion = (userTemperature - 32) / 1.8;
    printf("The fahrenheit equivalent of %lf°f is %lf°c", userTemperature, userCelsiusConversion);
    return 0;
}