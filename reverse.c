int reverse(int x)
{
    int res = 0;
    while (x != 0)
    {
        //每次取末尾数字
        int tmp = x % 10;
        //判断是否 大于 最大32位整数
        if (res > 214748364 || (res == 214748364 && tmp > 7))
        {
            return 0;
        }
        //判断是否 小于 最小32位整数
        if (res < -214748364 || (res == -214748364 && tmp < -8))
        {
            return 0;
        }
        // 将末尾的数字加起来
        res = res * 10 + tmp;
        x /= 10; // 将数字降维一下
    }
    return res;
}
