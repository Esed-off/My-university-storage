#include <iostream>
#include <ctime>
#include "math.h"
#include "ConsoleApplication5.h"
#include<string>


void array_f(int array_size)
{
    srand(time(NULL));
    int search;
    int sum=0;
    std::cout << "ввелите размер массива\n"; std::cin >> array_size;
    std::cout << "введите число для поиска повторений - \n"; std::cin >> search;
    int* array = new int[array_size];
    *array = array_size;
    for (int i = 0; i < array_size; i++)
    {
        array[i] = rand() % 20 - 10;
        std::cout << array[i] << std::endl;
        if(array[i] == search)
        {
            sum++;
        }
   }
    std::cout << "число " << search << " повторяется " << sum << " раз";
}

void array_f(double array_size_char)
{
    srand(NULL);
    setlocale(LC_ALL, "Russian");
    std::cout << "введите размер массива ";  std::cin >> array_size_char;
    std::string* p_darr = new std::string[array_size_char];
    std::string search;
    std::cout << "какой символ ищем? "; std::cin >> search;
    std::cout << std::endl;
    int sum = 0;
    for (int i = 0; i < array_size_char; i++)
    {
        p_darr[i] = char(rand() % 500 - 250);
        std::cout << p_darr[i] << std::endl;

        if (search == p_darr[i])
        {
            sum++;
        }
    }
    std::cout << "символ - " << search << " повторяется " << sum << " раз ";
}

int main()
{
    setlocale(LC_ALL, "Russian"); 
    int array_size=0, menu; double array_size_char = 0;
    std::cout << "какие элементы в массиве?\n чиселки (целочисленные) - 1 \n элементики - 2\n"; std::cin >> menu;
    switch (menu)
    {
    case 1:array_f(array_size);; break;
    case 2:array_f(array_size_char); break;
    default: std::cout << "неверное число!"; break;      
    }
}




