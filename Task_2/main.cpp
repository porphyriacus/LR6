#include <iostream>

#include "header.h"

int main()
{
    std::cout << " \n\nПрограмма печатает квитанцию об оплате за телеграмму,"
              << " с известной стоимостью одного слова."
              << "\nПрограмма написана Саранцевой Дарьей, учащейся группы 453502\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << "*********";
    }

    while (true)
    {
        std::cout << "\nВведите 1, если хотите начать программу, введите 2, если хотите закончить программу.\n";
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

        while (1)
        {
            std::cout << "\nВведите стоимость слова\t";
            double cost = IncorrectInputDouble();
            if (cost < 0.0)
            {
                std::cout << "Стоимость всё-таки должна быть неотрицательна" << std::endl;
                getchar();
                continue;
            }
            getchar();
            const int maxsize = 80;
            char *s = new char[maxsize];
            std::cout << "\nВведите телеграмму"
                      << "(чтобы завершить ввод нажмите ENTER)." << std::endl;

            str(s, maxsize);
            std::cout << "Ваша телеграмма :\n"
                      << s << '\n';

            double res = solve(s, cost);
            std::cout << "Стоимость телеграммы: " << res << " у.е." << std::endl;

            delete[] s;
            s = nullptr;
            break;
        }
    }
}
