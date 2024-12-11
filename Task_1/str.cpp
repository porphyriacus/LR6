#include <iostream>

void str(char *str, int size)
{

    bool checkipecki = true;
    while (checkipecki)
    {
        int check = 0, i;
        checkipecki = false;

        while ((i = getchar()) != '\n')
        {
            if (check >= size - 1)
            {
                std::cout << "Достигнут максимальный размер строки. Вероятно, ваша строка будет 'урезана'\n";
                break;
            }
            if (i != '1' && i != '0' && i != ' ')
            {
                std::cout << "Строка может содержать только символы 1, 0 и пробел. Попробуйте ввести строку ещё раз :3\n";
                checkipecki = true;
                while ((getchar()) != '\n')
                    ;
                break;
            }
            str[check] = i;
            check++;
        }

        str[check] = '\0';
    }
}