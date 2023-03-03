#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    returnSize = (int*) malloc(sizeof(nums));
    for (size_t i = 0; i <  numsSize; i++)
    {
        for (size_t j = 0; j <  numsSize; j++)
        {
           if (nums[j] + nums[i] == target)
           {
                returnSize[0] = j;
                returnSize[1] = i;
                break;
           }
        }
    }
    
    free(returnSize);
    return returnSize;

}
