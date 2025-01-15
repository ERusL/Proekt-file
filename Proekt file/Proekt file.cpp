// Proekt file.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include "Maths.h"
//#include "Maths.cpp" 

int main()
{
    setlocale(LC_ALL, "RUS");
    int number1 = 0;
    int number2 = 0;
    int n = 0;
    std::cout << "Введите первое число ";
    std::cin >> number1;
    std::cout << "\nВведите второе число ";
    std::cin >> number2;
    std::cout << "\nВыберите операцию(1-сложение, 2-вычитание, 3-умножение, 4-деление, 5-возведение в степень): "; 
    std::cin >> n;
        if (n == 1)
        {
           std::cout << number1 << " плюс " << number2 << " = "<<add(number1, number2);
        }
        if (n == 2)
        {
            std::cout << number1 << " минус " << number2 << " = "<<subtr(number1, number2);
        }
        if (n == 3)
        {
            std::cout << number1 << " умножить на " << number2 << " = "<<multi(number1, number2);
        }
        if (n == 4)
        {
            std::cout << number1 << " разделить на " << number2 << " = "<<delen(number1, number2);
        }
        if (n == 5)
        {
            std::cout << number1<<" в степени "<< number2 <<" = "<<power(number1, number2);
        }
        
    return 0;
}