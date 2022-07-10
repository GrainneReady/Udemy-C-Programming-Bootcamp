/*
Write a Program that receives a "num" from the user/

The program should print the SUM of all the integers from 1 up to "num".

Example #1: 5 -> 1 + 2 + 3 + 4 + 5 = 15
Example #2: 7 = 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("%d", i);        //  UNCOMMENT THIS PART IF YOU JUST WANT THE SUM
        if (i != num)           //  ..
            printf(" + ");      //  ...
        sum += i;
    }
    printf(" = %d\n", sum);
    return 0;
}