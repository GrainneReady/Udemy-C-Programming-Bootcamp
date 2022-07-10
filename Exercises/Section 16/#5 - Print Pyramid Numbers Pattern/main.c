/*
Write a program that receives an integer - "n".
The program should print a Pyramid of Numbers with the following pattern.
(for n = 3)
  1
 2 3
4 5 6
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxRows, currentNumber = 1;
    printf("Enter a number: ");
    scanf("%d", &maxRows);
    for (int row = maxRows; row > 0; row--)
    {
        for (int numOfSpaces = 0; numOfSpaces <= row - 1; numOfSpaces++)
        {
            printf(" ");
        }
        for (int numbersInRow = 1; numbersInRow <= maxRows - row + 1; numbersInRow++, currentNumber++)
        {
            printf("%d ", currentNumber);
        }
        printf("\n");
    }
    return 0;
}