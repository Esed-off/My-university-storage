#include "pch.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    srand(time(NULL));
    int a;
    cout << "���������� ��������� -  ";
    cin >> a;
    
    int* Array = new int[a];
    cout << "----------------------------------------------------------\n ������ \n ";
    for (int i = 0; i < a; i++)
    {
        Array[i] = rand() % 10 + 1;
        cout << Array[i] << " ";
    }
    cout << endl;
    
    sort(Array, Array + a);
    cout << "������� �������-  " << Array[a / 2] << endl;

    system("pause");

    int n = 0;

    cout << "������ ��� �������� � ��� �������  ";
    for (int i = 0; i < a - n; i++)
    {
        for (int c = i + 1; c < a - n; c++)
        {
            while (Array[i] == Array[c])
            {
                for (int f = c; f < a - n; f++)
                {
                    Array[f] = Array[f + 1];
                }
                n += 1;
            }
        }
        cout <<setw(3)<< Array[i];
    }

    return 0;

}
