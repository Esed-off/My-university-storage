#include "pch.h"
#include <iostream>
#include "ctime"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int year; int color_of_year;
    cout << "������� ��� "<< endl; cin >> year;
    color_of_year = year % 10;
    cout << endl;
    system("pause");
    switch (color_of_year)
    {
    case 0: cout << "GRIGIO = ������"; break;
    case 1: cout << "GRIGIO = ������"; break;
    case 2: cout << "AZZURRO = ����"; break;
    case 3: cout << "AZZURRO = ����"; break;
    case 4: cout << "VERDE = ������"; break;
    case 5: cout << "VERDE = ������"; break;
    case 6: cout << "ROSSO = �����"; break;
    case 7: cout << "ROSSO = �����"; break;
    case 8: cout << "GIALLO = �����"; break;
    case 9: cout << "GIALLO = �����"; break;
    default: cout << "�������";
    }
    cout << endl;
    system("pause");
   
        int animal_of_year;
    animal_of_year = year % 12;
   
        switch (animal_of_year)
        {
     
        case 0: cout << "�����"; break;
        case 1: cout << "���"; break;
        case 2: cout << "����"; break;
        case 3: cout << "���"; break;
        case 4: cout << "������"; break;
        case 5: cout << "����"; break;
        case 6: cout << "������"; break;
        case 7: cout << "����"; break;
        case 8: cout << "��������"; break;
        case 9: cout << "�����"; break;
        case 10: cout << "�����"; break;
        case 11: cout << "������"; break;

        default: cout << "�� ��, ����� ����������???????????????????????????";
        }
    return 0;
}
