#include <iostream>

static bool is_utf8_start(unsigned char s)
{
    return (s & 0xC0) == 0xC0;
}

static void reverse_utf8_word(char *start, char *end)
{
    while (start < end)
    {
        int len_start = is_utf8_start((unsigned char)*start) ? 2 : 1;
        int len_end = is_utf8_start((unsigned char)*(end - 1)) ? 2 : 1;

        if (len_start == 2 && len_end == 2)
        {
            // меняет два UTF-8 символа (по два байта)
            char temp1 = *start;
            char temp2 = *(start + 1);
            *start = *(end - 1);
            *(start + 1) = *(end);
            *(end - 1) = temp1;
            *(end) = temp2;
            start += 2;
            end -= 2;
        }
        else
        {
            // одиночные байты
            char temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
}

void solve(char ***s, const int row, const int col, int start)
{
    if (s[row][col][start] == '\0')
        return;

    int st = start;
    long long sum = 0;

    while (s[row][col][st] == ' ')
    {
        ++st;
    }

    int check = st;
    while ((s[row][col][check] != ' ') && (s[row][col][check] != '\0'))
    {
        sum += (unsigned char)s[row][col][check];
        ++check;
    }

    if (sum % 2 == 0)
    {
        reverse_utf8_word(&s[row][col][st], &s[row][col][check - 1]);
    }

    if (s[row][col][check] != '\0')
    {
        return solve(s, row, col, check);
    }
}