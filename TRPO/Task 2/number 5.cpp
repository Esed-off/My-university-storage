#include "pch.h"
#include <iostream>
#include "ctime"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int year; int color_of_year;
    cout << "введите год "<< endl; cin >> year;
    color_of_year = year % 10;
    cout << endl;
    system("pause");
    switch (color_of_year)
    {
    case 0: cout << "GRIGIO = Металл"; break;
    case 1: cout << "GRIGIO = Металл"; break;
    case 2: cout << "AZZURRO = Вода"; break;
    case 3: cout << "AZZURRO = Вода"; break;
    case 4: cout << "VERDE = Дерево"; break;
    case 5: cout << "VERDE = Дерево"; break;
    case 6: cout << "ROSSO = агонь"; break;
    case 7: cout << "ROSSO = агонь"; break;
    case 8: cout << "GIALLO = земля"; break;
    case 9: cout << "GIALLO = замля"; break;
    default: cout << "калыван";
    }
    cout << endl;
    system("pause");
   
        int animal_of_year;
    animal_of_year = year % 12;
   
        switch (animal_of_year)
        {
     
        case 0: cout << "крыса"; break;
        case 1: cout << "бык"; break;
        case 2: cout << "тигр"; break;
        case 3: cout << "кот"; break;
        case 4: cout << "дракон"; break;
        case 5: cout << "змея"; break;
        case 6: cout << "лошадь"; break;
        case 7: cout << "коза"; break;
        case 8: cout << "обезьяна"; break;
        case 9: cout << "петух"; break;
        case 10: cout << "псина"; break;
        case 11: cout << "свинья"; break;

        default: cout << "ты чё, опять калыванишь???????????????????????????";
        }
    return 0;
}
