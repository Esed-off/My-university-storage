#include <iostream>
#include <sstream>  
#include <string> 

using namespace std;

void NumberToString(double double_number)
{
    
    string s = to_string(double_number);
    cout << "Результат - " << "'" << s << "'" << endl;
}
void NumberToString(int number)
{
    
    string s = to_string(number);
    cout << "Результат - " << "'" << s << "'" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int menu;
    std::cout << "какое у вас будет число? \n целочисленное - введите 1 \n дробное  - введите 2 \n"; std::cin >> menu;
    double double_number = 0;
    int number = 0;
    switch (menu)
    {
    case 1: cout << "Введите число для конвертации в строку." << endl; cin >> number; NumberToString(number); break;
    case 2: cout << "Введите дробное число для конвертации в строку." << endl; cin >> double_number; NumberToString(double_number);  break;
    default: std::cout << "неверное число ;("; break;
    }
    return main();
}