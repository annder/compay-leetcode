int romanToInt(char *s)
{
    int count = 0;
    while (*s)
    {
        if (*s == 'V')
            count += 5;
        else if (*s == 'L')
            count += 50;
        else if (*s == 'D')
            count += 500;
        else if (*s == 'M')
            count += 1000;
        else if (*s == 'I')
            count = (*(s + 1) == 'V' || *(s + 1) == 'X') ? count - 1 : count + 1;
        else if (*s == 'X')
            count = (*(s + 1) == 'L' || *(s + 1) == 'C') ? count - 10 : count + 10;
        else
            count = (*(s + 1) == 'D' || *(s + 1) == 'M') ? count - 100 : count + 100;
        s++;
    }
    return count;
}

/**
 * 
 * int romanToInt(char *s)
{
    int hashmap[26] = {0};
    hashmap['I' - 'A'] = 1;
    hashmap['V' - 'A'] = 5;
    hashmap['X' - 'A'] = 10;
    hashmap['L' - 'A'] = 50;
    hashmap['C' - 'A'] = 100;
    hashmap['D' - 'A'] = 500;
    hashmap['M' - 'A'] = 1000;

    int previous = 0, sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (previous < hashmap[s[i] - 'A'])
        {
            sum -= previous * 2;
        }
        sum += (previous = hashmap[s[i] - 'A']);
    }
    return sum;
}
 * */

