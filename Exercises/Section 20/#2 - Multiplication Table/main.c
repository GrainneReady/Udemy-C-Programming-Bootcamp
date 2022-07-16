#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 11
#define MAX_COL 13
int main()
{
    int multiplicationTable[MAX_ROW][MAX_COL];
    for (int currentRow = 1; currentRow < MAX_ROW; currentRow++)
    {
        for (int currentCol = 1; currentCol < MAX_COL; currentCol++)
        {
            multiplicationTable[currentRow][currentCol] = currentRow * currentCol;
            printf("%3d ", multiplicationTable[currentRow][currentCol]);
        }
        printf("\n");
    }
    return 0;
}