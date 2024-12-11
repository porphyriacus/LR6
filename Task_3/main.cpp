#include <iostream>

#include "header.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << " Пользователю необходимо ввести матрицу. Элементы матрицы – строки."
              << " Программа подсчитываетсумму кодов символов каждого слова и,"
              << " если сумма оказалась четной, разворачивает зеркально это слово в строке."
              << " Полученные матрицы выводятся на экран на экран."
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
        int maxsize = 80;
        while (1)
        {
            std::cout << "\nВведите количество строк в вашей матрице(натуральное число)\t";
            int row = IncorrectInput();
            if (row <= 0)
            {
                std::cout << "Количество строк не может быть меньше или равно нулю. Попробуйте ещё раз." << std::endl;
                continue;
            }

            while (true)
            {
                std::cout << "\nВведите количество столбцов в вашей матрице(натуральное число)\t";
                int col = IncorrectInput();
                if (col <= 0)
                {
                    std::cout << "Количество столбцов не может быть меньше или равно нулю. Попробуйте ещё раз." << std::endl;
                    continue;
                }
                getchar();
                int i, j;
                char ***s = new char **[row];
                for (i = 0; i < row; ++i)
                {
                    s[i] = new char *[col];
                }

                for (i = 0; i < row; ++i)
                {
                    for (j = 0; j < col; ++j)
                    {
                        s[i][j] = new char[maxsize];
                        std::cout << "\nВведите строку, под индексом " << i + 1 << ", " << j + 1 << '\n';
                        read(s, maxsize, i, j);
                        // std::cout<<s[i][j] << '\n';
                    }
                }
                std::cout << "\nИсходная матрица:\n"
                          << std::endl;
                for (i = 0; i < row; ++i)
                {
                    for (j = 0; j < col; ++j)
                    {
                        std::cout << s[i][j] << '\n';
                        solve(s, i, j, 0);
                    }
                    std::cout << std::endl;
                }

                std::cout << "\nПолученная матрица:\n"
                          << std::endl;
                for (i = 0; i < row; ++i)
                {
                    for (j = 0; j < col; ++j)
                    {
                        std::cout << s[i][j] << '\n';
                    }
                    std::cout << std::endl;
                }

                for (i = 0; i < row; ++i)
                {
                    for (j = 0; j < col; ++j)
                    {
                        delete[] s[i][j];
                        s[i][j] = nullptr;
                    }
                    delete[] s[i];
                    s[i] = nullptr;
                }
                delete[] s;
                s = nullptr;
                break;
            }
            break;
        }
    }
    return 0;
}
