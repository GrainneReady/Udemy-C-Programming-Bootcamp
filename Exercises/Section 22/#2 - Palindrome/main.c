/*

*/

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5

int checkIfPalindrome(int nums[ARRAY_SIZE], int numsSize)
{
    for (int i = 0; i < numsSize/2; i++)
    {
        if (nums[i] != nums[numsSize-i-1])
            return 0;
    }
    return 1;
}



int main()
{
    int nums[ARRAY_SIZE] = {1, -5, 3, -5, 1};
    int isPalindrome = checkIfPalindrome(nums, ARRAY_SIZE);
    if (isPalindrome == 1)
        printf("The array is a Palindrome.\n");
    else
        printf("The array is not a Palindrome.\n");
    return 0;
}