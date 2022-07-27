/*
Write a program that will print a number and it's power on a line in a file.
The program should do this for each number from 1 to 10
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMBER 10
int main()
{
    FILE* fp;
    fp = fopen("exerciseFile.txt", "w");
    if (fp != NULL)
    {
        for (int i = 1; i <= MAX_NUMBER; i++)
        {
            fprintf(fp, "%d %d\n", i, i * i);
        }
        fclose(fp);
    }
    return 0;
}