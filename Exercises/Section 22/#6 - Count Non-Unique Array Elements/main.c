#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 10

int countNonUniqueElements(int nums[NUMS_SIZE], int numSize)
{
    int firstNum, secondNum;
    int amountOfNonUniqueElemns = 0;
    for (int i = 1; i < numSize - 1; i++)
    {
        int isNonUnique = 1;
        for (int j = i + 1; j < numSize; j++)
        {
            if (nums[i] == nums[j])
            {
                isNonUnique = 0;
                break;
            }
        }
        if (isNonUnique == 1)
            for (int k = 0; k < i; k++)
            {
                if (nums[i] == nums[k])
                {
                    isNonUnique = 0;
                    break;
                }
            }
        if (isNonUnique == 0) {
            printf("%d is a Non-Unique Value.\n", nums[i]);
            amountOfNonUniqueElemns++;
        }
    }
    return amountOfNonUniqueElemns;

}
int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    int numOfNonUniqueElements = countNonUniqueElements(nums, NUMS_SIZE);
    printf("The amount of non-unique values in the array is: %d\n", numOfNonUniqueElements);
}