#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y, z, a, f, s;
	int k;

	cout << "write z"; cin >> z;
	if (z < 1) x = z*z ; //условие перед заданием (в скобке)
	else x = z + 1;
	cout << "write a"; cin >> a;
	cout <<" 1) 2*x \n 2) x*x \n 3) x/3 \n";
	cout << "cod="; cin >> k; //выбираем какйю функцию использовать, ниже будет цикл с трёмя функции

	switch (k)
	{
	case 1:f = 2 * x; cout<< "f=2*x "; break;// первая функция
	case 2:f = x * x; cout <<"f=x*x "; break;// вторая функция
	case 3:f = x / 3; cout << "f=x/3 "; break;// третья функция
	default: cout << "no cod";
	}
	cout << "a= " << a;
	cout <<"z= " << z;
	y = a * log(1 + pow(x, 1. / 5.)) + pow(cos(fabs(f + 1)), 2);//вычисление значений
	cout <<" result - " << y << endl;
	return 0;
}