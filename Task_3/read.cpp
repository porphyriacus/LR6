#include <iostream>
static bool utf_8(int ch)
{
    return ((ch & 0xC0) != 0x80);
}

void read(char ***s, int size, int row, int col)
{
    bool input = false;
    int check = 0;

    while (!input)
    {
        int ch;
        input = true;
        check = 0;
        std::cout << "Введите строку: " << std::endl;

        while ((ch = getchar()) != '\n')
        {
            if (check >= size - 1)
            {
                std::cout << "Достигнут максимальный размер строки. Вероятно, ваша строка будет 'урезана'\n";
                break;
            }
            if (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)) || (ch == ' ') || (ch == '\n'))
            {
                input = true;
            }
            else if ((ch >= 0xD0 && ch <= 0xD1))
            {
                int next_ch = getchar();
                if (((ch == 0xD0) && (next_ch >= 0x90 && next_ch <= 0xBF)) || ((ch == 0xD1) && (next_ch >= 0x80 && next_ch <= 0x8F)))
                {
                    s[row][col][check] = ch;
                    ++check;
                    s[row][col][check] = next_ch;
                    ++check;
                    continue;
                }
                else
                {
                    input = false;
                    while ((ch = getchar()) != '\n')
                        ;
                    break;
                }
            }
            else
            {
                input = false;
                while ((ch = getchar()) != '\n')
                    ;
                break;
            }

            s[row][col][check] = ch;
            ++check;
        }
        s[row][col][check] = '\0';

        if (!input)
        {
            std::cout << "\nЕсли мы говорим про строку, состоящую из слов, пожалуйста, используйте только символы и пробелы. Повторите ввод ещё раз" << std::endl;
            std::cout << std::endl;
        }
    }
}
