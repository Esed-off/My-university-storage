#include "pch.h"
#include <iostream>
#include <string>
#include "cmath"
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, k;
    cout << "количество строк   ";
    cin >> n;
    cout << "Количество столбцов  ";
    cin >> k;

    int sum, ii = 0;
    int** Array = new int* [n];
    for (int i = 0; i < n; i++) {
        Array[i] = new int[k];
        for (int j = 0; j < k; j++) {
            Array[i][j] = (rand() % 20)-10;
            sum = sum + Array[i][j];
            ii++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << setw(3) << Array[i][j];
        }
        cout << endl;

    }
    double middle_number;
    middle_number = sum / ii;
    cout << "сумма элементов массива - " << sum << endl << "количество элементов массива - " << ii << endl;
    cout << "среднее значение элемента массива - " << middle_number;
    return 0;
}
