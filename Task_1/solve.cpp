
int solve(const char *str)
{

    int res = 0, lol = 0, i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            ++i;
            continue;
        }
        ++lol;
        if (str[i + 1] == ' ' || !str[i + 1])
        {
            if (lol == 5)
                ++res;
            lol = 0;

            if (str[i + 1] != '\0')
            {
                i += 2;
            }
            else
            {
                break;
            }

            continue;
        }

        ++i;
    }

    return res;
}