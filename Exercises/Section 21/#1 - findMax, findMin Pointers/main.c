#include <stdio.h>
#include <stdlib.h>

int findMax(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}


int findMin(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    return num2;
}

void findMinMax(int num1, int num2, int *min, int *max)
{
    // Modify by Reference using pointers
    if (num1 < num2) {
        *min = num1;
        *max = num2;
    }
    else {
        *min = num2;
        *max = num1;
    }
}


void main(){
    int a = 5, b = 7, max, min;
    // max = findMax(a, b);
    // min = findMin(a, b);
    findMinMax(a, b, &min, &max);
    printf("max between %d,%d = %d\n", a, b, max);
    printf("min between %d,%d = %d\n", a, b, min);
}