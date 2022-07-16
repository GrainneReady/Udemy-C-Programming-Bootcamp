#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a2DArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("(%d, %d) = %d\n", i, j, a2DArray[i][j]);
        }
        printf("\n");
    }
    printf("Or view this way..\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", a2DArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}