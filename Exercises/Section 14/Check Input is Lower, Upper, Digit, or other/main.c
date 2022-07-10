/*
Write a program that shold receive a character from the user.
The program should print if the character is:
  - Lowercase Letter
  - Uppercase Letter
  - Digit
  - Other
*/

#include <stdio.h>

int main()
{
    char userChar;
    printf("Enter a character: ");
    scanf("%c", &userChar);

    if (userChar >= '0' && userChar <= '9')
        printf("%c is a Digit.\n", userChar);
    else if (userChar >= 'A' && userChar <='Z')
        printf("%c is an Uppercase Letter.\n", userChar);
    else if (userChar >= 'a' && userChar <='z')
        printf("%c is a Lowercase Letter.\n", userChar);
    else
        printf("%c is an Other character. (Neither a Lowercase Letter, Uppercase Letter, or Digit.\n", userChar);

    return 0;
}