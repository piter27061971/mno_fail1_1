// ConsoleApplication21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"


int main()
{
    int a1, b2, vibor;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число: ";
    std::cin >> a1;
    //std::cout<< std::endl;
    std::cout << "Введите второе число: ";
    std::cin >> b2;
    // std::cout << std::endl;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> vibor;
    switch (vibor)
    {
    case 1:
        std::cout << a1 << " плюс " << b2 << " равно " << add(a1, b2) << std::endl;
        break;
    case 2:
        std::cout << a1 << " минус " << b2 << " равно " << sub(a1, b2) << std::endl;
        break;
    case 3:
        std::cout << a1 << " умножить " << b2 << " равно " << mult(a1, b2) << std::endl;
        break;
    case 4:
        std::cout << a1 << " поделить на " << b2 << " равно " << divide(a1, b2) << std::endl;
        break;
    case 5:
        std::cout << a1 << " возвести в степень " << b2 << " равно " << power(a1, b2) << std::endl;
        break;
    defaul:
        std::cout << "Неизвестная операция"<< std::endl;

    
    }
    //std::cout << std::endl;
    //std::cout << func(a1, b2, vibor);
    // std::cout << "Hello World!\n";
}

/*
В этом задании вы вынесете математические функции в отдельный файл.
Даны следующие математически функции: сложение, вычитание, умножение, деление, возведение в степень.
Вам нужно разместить их в отдельном файле исходного кода и воспользоваться ими из функции main.
Попросите пользователя ввести два числа и выбрать операцию. Выведите результат ему на консоль.
*/