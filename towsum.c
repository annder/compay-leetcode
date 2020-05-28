int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    static int a[2] = {0}; // 全局变量

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                a[0] = i; // 这样赋值关于赋值到
                a[1] = j;
                *returnSize = 2;
                return a;
            }
        }
    }
    *returnSize = 0;
    return 0;
}