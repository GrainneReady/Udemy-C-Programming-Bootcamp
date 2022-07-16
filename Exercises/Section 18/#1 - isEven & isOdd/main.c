#include <stdio.h>
#include <stdlib.h>


int isEven(int num)
{
    /*
    This function will receive an integer
    Return "1" if integer is even, or 0 if integer is odd
    */
    if (num % 2 == 0)
        return 1;
    return 0;
}


int isOdd(int num)
{
    /*
    This function will receive an integer
    Return "1" if integer is odd, or 0 if integer is even
    */
    if (num % 2 == 1) // or if (isEven(num) % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int num;
    printf("Enter a whole number (E.g. 5 or 192): ");
    scanf("%d", &num);
    char *parityStr = (isEven(num) == 1 ? "n even" : " odd");
    printf("%d is a%s number.\n", num, parityStr);

}