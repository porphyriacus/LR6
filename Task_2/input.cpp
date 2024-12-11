#include <iostream>

auto IncorrectInput() -> int
{
    int a;

    while (!(std::cin >> a) || (std::cin.peek() != '\n')) // cin.peek() возвращает целочисленное представление следующего символа в буфере потока, не прочитав его
    {
        std::cin.clear();              // очищаем cin, приводим его в рабочее состояние
        while (std::cin.get() != '\n') // Читаем всю оставшуюся строку посимвольно (т.е. пока не встретим '\n')
        {
        }

        std::cout << "Неверный формат ввода." << std::endl;
    }

    return a;
}

auto IncorrectInputDouble() -> double
{
    double incorrect = -1.0;
    double a;

    while (!(std::cin >> a) || (std::cin.peek() != '\n')) // cin.peek() возвращает целочисленное представление следующего символа в буфере потока, не прочитав его
    {
        std::cin.clear();              // очищаем cin, приводим его в рабочее состояние
        while (std::cin.get() != '\n') // Читаем всю оставшуюся строку посимвольно (т.е. пока не встретим '\n')
        {
        }

        std::cout << "Неверный формат ввода." << std::endl;
        return incorrect; // Возвращаем некорректное значение
    }

    return a;
}
