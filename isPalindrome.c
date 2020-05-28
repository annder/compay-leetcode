// 是否是回文数
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long ret = 0;
    int temp = x;
    while (x != 0)
    {
        ret = ret * 10 + x % 10; // 填充？
        x /= 10;
    }
    if (ret == temp)
        return true;
    return false;
}

/*
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int ret = 0;
    while (x != 0)
    {
        int tmp = x % 10; // 余数
        ret = ret * 10 + tmp;
        x /= 10;
    }
    return x == ret || x == (ret / 10);
}
*/
int main()
{
    return 0;
}