/*
1. Write a program that gets from the user a temperature ("double") in Celsius Degrees.
    The program should calculate and convert the temperature from Celsius Degrees to Fahrenheit Degrees and print it.
*/

#include <stdio.h>

int main()
{
    double userTemperature, userFahrenheitConversion;
    printf("Enter a temperature in °c: ");
    scanf("%lf", &userTemperature);
    userFahrenheitConversion = userTemperature * 1.8 + 32;
    printf("The fahrenheit equivalent of %.2lf°c is %.2lf°f", userTemperature, userFahrenheitConversion);
    return 0;
}