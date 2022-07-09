/*
Write a program that receives a variable "data" or type "float" from the user.

The program should print only the "decimal" part of the "data"
*/
#include <stdio.h>

int main() {
    double userInput, decimalOfUserInput;
    printf("Enter the number you wish to extract the decimal of: ");
    scanf("%lf", &userInput);
    decimalOfUserInput = userInput - (int)userInput;
    printf("Decimal Part: %lf", decimalOfUserInput);
    return 0;
}