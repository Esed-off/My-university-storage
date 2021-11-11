#include "pch.h"
#include <iostream>
#include <ctime>
#include<stdlib.h>
#include <iomanip>

using namespace std;


void Function_for_task(int rows, int columns) {

	srand(time(0));

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[columns];
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = rand() % 20 - 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << setw(3) <<  matrix[i][j];
		}
		cout << endl;
	}

	int num_of_all_elements = rows * columns;
	int* all_elements = new int[num_of_all_elements];
	int a = 0;
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < columns; j++)
		{
			all_elements[a] = matrix[i][j];
			a++;
		}

	}

	cout << "все элементы массива - \n";
	for (int i = 0; i < num_of_all_elements; i++)
	{
		cout << " " << all_elements[i];
	}

	int changing;
	for (int i = 0; i < num_of_all_elements; i++) 
	{
		for (int j = i + 1; j < num_of_all_elements; j++) 
		{
			if (all_elements[j] < all_elements[i]) 
			{
				changing = all_elements[i];
				all_elements[i] = all_elements[j];
				all_elements[j] = changing;
			}
		}
	}

	cout << "\nизменённая матрица - \n";
	for (int i = 0; i < num_of_all_elements; i++)
	{
		cout << " " << all_elements[i];
	}

	cout <<  "\n  Медиана матрицы - " << all_elements[num_of_all_elements / 2 ] << endl;

	cout << "наибольший элемент матрицы - " <<  all_elements[num_of_all_elements - 1] << endl;

	cout << "наименьший элемент матрицы - " << all_elements[0] << endl;

	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	delete[] all_elements;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int rows; cout << "количество строк - "; cin >> rows;
	int columns; cout << "количество столбцов -  "; cin >> columns;

	Function_for_task(rows, columns);

	return 0;
}