        
#include "Complex.h"
#include <iostream>



int main()
{   
    
    setlocale(LC_ALL, "Rus");

    double real = 0;
    double imaginary = 0;

    std::cout << "Эта программа выполняет две операции с комплексными числами\n" << std::endl;
    std::cout << "Введите натуральную часть первого комплексного числа: \n";
    std::cin >> real;
    std::cout << "Введите мнимую часть первого комплексного числа: \n";
    std::cin >> imaginary;

    Complex first = Complex(real, imaginary);

    std::cout << "Введите натуральную часть второго комплексного числа: \n";
    std::cin >> real;
    std::cout << "Введите мнимую часть второго комплексного числа: \n";
    std::cin >> imaginary;

    Complex second = Complex(real, imaginary);

    std::cout << "Выберите требуемую операцию: \n"
        << "\t1. Сложение\n"
        << "\t2. Вычитание\n"
        << std::endl;

    int choice = 0;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        first.addition(first, second);
        std::cout << "Получившееся число имеет такие части: ";
        first.print();
        std::cout << std::endl;;
        break;
    case 2:
        first.subtraction(first, second);
        std::cout << "Получившееся число имеет такие части: ";
        first.print();
        std::cout << std::endl;;
        break;
    default:
        std::cout << "Такого действия не существует\n" << std::endl;
        break;
    }

    return 0;
}
