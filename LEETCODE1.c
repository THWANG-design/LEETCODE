#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target);
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int* result = NULL;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result = (int*)malloc(sizeof(int) * 2);
                sdresult[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}
int main(void)
{
    int* p = NULL;
    int ex[4] = { 3, 4, 5, 6 };
    int tar = 11;
    p = twoSum(ex, sizeof(ex)/sizeof(int), tar);
    printf("%d, %d", *p, *(p+1));
    return 0;
}
