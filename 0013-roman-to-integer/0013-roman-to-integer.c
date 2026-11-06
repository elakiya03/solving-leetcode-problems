int romanToInt(char *s)
{
    int values[128] = {0};

    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    int n = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int curr = values[(unsigned char)s[i]];
        int next = values[(unsigned char)s[i + 1]];

        if (curr < next)
            n -= curr;
        else
            n += curr;
    }

    return n;
}