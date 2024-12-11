#include <iostream>

void str(char *str, int size)
{
    if (str == nullptr)
    {
        std::cerr << "Error: nullptr passed to str function.\n";
        return;
    }

    int check = 0, i;
    while ((i = getchar()) != '\n')
    {
        if (check >= size - 1)
        {
            std::cout << "Достигнут максимальный размер строки. Вероятно, ваша телеграмма будет 'урезана'\n";
            break;
        }

        str[check] = i;
        check++;
    }
    str[check] = '\0';
}