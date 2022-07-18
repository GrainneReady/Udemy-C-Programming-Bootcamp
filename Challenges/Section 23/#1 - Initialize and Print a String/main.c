/*
Write a program that initializes a string with your:
    1. First Name
    2. Last Name
The program should print your:
    Full name

Example:
    First Name - Brad
    Last Name - Pitt
    Print: "Your full name is: Brad Pitt"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char firstName[] = "Grainne", lastName[] = "Ready";
    //printf("Your full name is: %s %s\n", firstName, lastName);
    /* OR:
    printf("Your full name is: ");
    for (int i = 0; firstName[i] != '\0'; i++)
    {
        printf("%c", firstName[i]);
    }
    printf(" ");
    for (int i = 0; lastName[i] != '\0'; i++)
    {
        printf("%c", lastName[i]);
    }
    */
    char str[20];
    gets(str);
    printf("%s", str);
    return 0;
}