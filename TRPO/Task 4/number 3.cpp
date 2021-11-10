#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, k, nn, kk;
    cout << "количество строк в первой матрице -  ";
    cin >> n;
    cout << "количество столбцов во второй матрице - ";
    cin >> k;
    cout << "количество строк в первой матрице - ";
    cin >> nn;
    cout << "количество столбцов во второй матрице - ";
    cin >> kk;


    cout << "--------------------------------------------------------------------------------------\n первая матрица\n";
    int** first_matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        first_matrix[i] = new int[k];
        for (int j = 0; j < k; j++) {
            first_matrix[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) 
        {
            cout << first_matrix[i][j] << " ";
        }
        cout << endl << "\n";

    }

    cout << "--------------------------------------------------------------------------------------\n вторая матрица\n";

    int** second_matrix = new int* [nn];
    for (int i = 0; i < nn; i++) {
        second_matrix[i] = new int[kk];
        for (int j = 0; j < kk; j++) {
            second_matrix[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < nn; i++) {
        for (int j = 0; j < kk; j++) {
            cout << second_matrix[i][j] << " ";
        }
        cout << endl << "\n";


    }


    int result_matrix[1][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < kk; j++)
        {
            result_matrix[i][j] = 0;
            for (int l = 0; l < nn; l++)
                result_matrix[i][j] = result_matrix[i][j] + first_matrix[i][l] * second_matrix[l][j];
        }


    cout << "----------------------------------------------------------------------------------------------------------\n результат умножения \n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < kk; j++)
            cout << result_matrix[i][j] << "\t";
    }
    cout << endl;
   
    return 0;
}