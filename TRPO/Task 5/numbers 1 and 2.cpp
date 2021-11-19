#include <iostream>
#include <sstream>  
#include <string> 
#include "ConsoleApplication4.h"

/*



    */
void NumberToString(long double double_number)
{
    setlocale(LC_ALL, "Russian");
    std::ostringstream ostr;
    ostr << double_number;
    std::string theNumberString = ostr.str(); // вот теперь эта переменная - строчная
    std::cout << "теперь это строка - " << theNumberString;
}

void NumberToString(int number)
{
    setlocale(LC_ALL, "Russian");
    std::ostringstream ostr;
    ostr << number;
    std::string theNumberString = ostr.str(); // вот теперь эта переменная - строчная
    std::cout << "теперь это строка - ";
   
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int menu;
    std::cout << "какое у вас будет число? \n целочисленное - введите 1 \n с плавающей точкой - введите 2 \n"; std::cin >> menu;

    switch (menu)
    {
    case 1: int number;  std::cout << "введите число - \n"; std::cin >> number; NumberToString(number); break;
    case 2: long double double_number;  std::cout << "введите число с плавающей точкей - \n"; std::cin >> double_number; NumberToString(double_number);  break;
    default: std::cout << "incorrect number ;("; break;

    }
}