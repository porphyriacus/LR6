#include <iostream>

double solve(const char *str, double cost)
{

    int res = 0, i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            ++i;
            continue;
        }

        if (str[i + 1] == ' ' || !str[i + 1])
        {
            ++res;
            if (str[i + 1] != '\0')
            {
                i += 2;
            }
            else
            {
                break;
            }
        }

        ++i;
    }
    double m = res * cost;
    return m;
}