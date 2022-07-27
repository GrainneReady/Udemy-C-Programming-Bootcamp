/*
Write a program that will scan the numbers in a file and print them to stdout
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMBER 10
int main()
{
    int currentNum;
    FILE* fp;
    fp = fopen("exerciseFile.txt", "r");
    if (fp != NULL)
    {
        for (int i = 1; i <= MAX_NUMBER * 2; i++)
        {
            fscanf(fp, "%d", &currentNum);
            printf("%d\n", currentNum);
        }
        fclose(fp);
    }
    return 0;
}