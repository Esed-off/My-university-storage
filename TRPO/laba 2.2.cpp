#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	int n, d1, d2, d3, i; d1 = 0; d2 = 1;//задаем первых два значения
	cout << "write number "; cin >> n;
	if (n < 0) cout << "OMFG no way, change number\n";
	else {
		if (n == 0) cout << n; // проверка на вшивость, первые 2 числа всегда известны, их тут и выводим есл и n<2
		else
			if (n == 1) cout << n - 1, n;
			else {
				cout << " 0 1";
				for (i = 2; i < n; i++) // главный приколБ считаем числа после 0 и 1 
				{
					cout << " ", d3 = d1 + d2;// выводим пробел для красоты и считаем следующее число
					cout << d3;
					d1 = d2;//выполняем сдвиг на число вправо, и повторяем нужное кол-во раз этот цикл
					d2 = d3;
				}

				cout << endl;
			}

		int fac; i = 1; fac = 1;


		while (i < n) {
			fac = fac * ++i;//цикл который считает факториал
		}

		cout << "factorial = " << fac;

	}
}