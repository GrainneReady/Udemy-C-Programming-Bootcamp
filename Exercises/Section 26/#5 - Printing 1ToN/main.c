/*
Write a Recursive function that will receive some number "n". 
This function will print all the numbers from 1 up to "n" and from "n" up to 1
*/

#include <stdio.h>
#include <stdlib.h>


void printNToOne(int n)
{
    if (n >= 1)
    {
        printNToOne(n - 1);
        printf("%d ", n);
    }
    else if (n >= 0)
    {
        printf("\n");
        printNToOne(n - 1);
    }
}

void printOneToN(int n)
{
    if (n >= 1) {
        printf("%d ", n);
        printOneToN(n - 1);
    }
    else if (n >= 0)
    {
        printf("\n");
        printOneToN(n - 1);
    }
}

void printNtoOneAndViceVersa(int n)
{
    if (n >= 2) {
        printf("%d ", n);
        printNtoOneAndViceVersa(n - 1);
        printf("%d ", n);
    }
    else if (n >= 1)
    {
        printf("%d ", n);
    }
}
int main()
{
    int num;
    printf("Enter the \"n\" you want to print from 1 up to \"n\" and from \"n\" up to 1: ");
    scanf("%d", &num);
    printf("1 to n:");
    printNToOne(num);
    printf("\n\nn to 1: \n");
    printOneToN(num);
    printf("\nn to 1 and Vice Versa: \n");
    printNtoOneAndViceVersa(num);
    printf("\n\n");
    return 0;
}
