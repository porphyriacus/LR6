#include <iostream>

#include "header.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << " В строке, состоящей из групп нулей и единиц, разделенных пробелами,"
              << " программа находит количество групп с пятью цифрами."
              << "\nПрограмма написана Саранцевой Дарьей, учащейся группы 453502" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "*********";
    }

    while (true)
    {
        std::cout << "\nВведите 1, если хотите начать программу, введите 2, если хотите закончить программу." << std::endl;
        ;
        int status = IncorrectInput();

        if (status != 1 && status != 2)
        {
            std::cout << "Неверный формат ввода.";
            continue;
        }

        if (status == 2)
        {
            break;
        }

        getchar();

        for (int i = 0; i < 10; i++)
        {
            std::cout << "*********";
        }

        int maxsize = 80;

        char *s = new char[maxsize];

        std::cout << "\nВведите строку, состоящую из групп нулей и единиц, разделенных пробелами"
                  << "(чтобы завершить ввод нажмите ENTER)." << std::endl;

        str(s, maxsize);
        std::cout << "Ваша исходная строка :\n"
                  << s << '\n';
        int res = solve(s);
        if (!res)
        {
            std::cout << "В вашей строке нет групп с пятью цифрами. " << std::endl;
        }
        else
            std::cout << "Количество групп с пятью цифрами в вашей строке составляет:\t" << solve(s) << std::endl;

        delete[] s;
        s = nullptr;
    }
}
