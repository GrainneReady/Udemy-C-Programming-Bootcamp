/*
Write a function that receives three characters .
Should check if all the characters are of the digit type.
If so, return integer which is decimal representation of this number.

Example:
    '1', '5', '9'
    = 159
*/

#include <stdio.h>
#include <stdlib.h>


int threeCharToDigit(char characters[3])
/*
Function is expected to receive a char array of size '3'.
*/
{
    int num = 0;
    for (int index = 0; index < 3; index++)
    {
        if (characters[index] >= '0' && characters[index] <= '9')
        {
            num *= 10;
            num += characters[index] - 0x30;
        }
        else
            return 0;
    }
    return num;
}


int main()
{
    char characters[3];
    printf("Enter three characters: ");
    scanf("%s", &characters);
    printf("%d\n", threeCharToDigit(characters));
    return 0;
}