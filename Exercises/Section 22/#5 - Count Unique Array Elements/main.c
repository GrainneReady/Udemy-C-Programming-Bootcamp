/*
Print all Unique Elements in an Array
Count the number of Unique Elements in an Array
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMS_SIZE 10


int countUniqueElements(int nums[NUMS_SIZE], int numSize)
{
    int firstNum, secondNum;
    int amountOfUniqueElems = 0;
    for (int i = 1; i < numSize; i++)
    {
        int isUnique = 1;
        for (int j = i + 1; j < numSize; j++)
        {
            if (nums[i] == nums[j])
            {
                isUnique = 0;
            }
        }
        for (int k = 0; k < i; k++)
        {
            if (nums[i] == nums[k])
            {
                isUnique = 0;
            }
        }
        if (isUnique == 1) {
            printf("%d is a Unique Value.\n", nums[i]);
            amountOfUniqueElems++;
        }
    }
    return amountOfUniqueElems;

}

int main()
{
    int nums[NUMS_SIZE];
    for (int i = 0; i < NUMS_SIZE; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    int numOfUniqueElements = countUniqueElements(nums, NUMS_SIZE);
    printf("The amount of unique values in the array is: %d\n", numOfUniqueElements);
}