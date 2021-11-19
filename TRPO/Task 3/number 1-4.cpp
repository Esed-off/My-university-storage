﻿
#include <iostream>
#include "math.h"


using namespace std;

int NOD(int number_a, int number_b)
{
	while (number_a > 0 && number_b > 0)

		if (number_a > number_b)
			number_a %= number_b;

		else
			number_b %= number_a;

	return number_a + number_b;
}


void rectangle()
{
	int x, z, k;
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << " Введите высоту прямоугольника ";   cin >> x;
	cout << "Введите ширину прямоугольника ";    cin >> z;
	cout << "Площадь = " << x * z << endl;

	int i = 0;
	for (i; i < x; i++)
	{
		for (k = 0; k < z; k++)
		{
			cout << char(2);
		}
		cout << endl;
	}
	system("pause");
}

void Factorial(long long& g, long long n, long long& e)
{
	for (g; g <= n; g++) {
		e *= g;
	}
	cout << "факториал из этого числа равен - " << e << endl;
}

void Fibonacci(long long& n, long long& q, long long& w, long long& e, long long& c)
{
	cout << "Введитите количество чисел фибоначчи - "; cin >> n;
	q = 0;
	w = 1;
	cout << 1 << "  ";

	for (e = 0; e < n; e++) {
		c = q + w;
		cout << c << "  ";
		q = w;
		w = c;
	}
	cout << " ";
	e = 1;
}

void fibonacci_and_factorial()
{
	long long  int n, c, q, w, e, g = 1;
	Fibonacci(n, q, w, e, c);
	Factorial(g, n, e);

	system("pause");
}


void simple_or_not_and_NOD()
{
	int number_a, number_b, ii = 2, p = 2;
	cout << "Введите 2 числа больше 0 " << endl; cout << "a= "; cin >> number_a; cout << "b= "; cin >> number_b;
	while (number_a % ii == 0) {
		ii++;
	}
	if (ii == number_a)
		cout << "Число а не простое" << endl;
	else
		cout << "Число а простое" << endl;
	ii = 0;
	while (number_b % p == 0)
	{
		p++;
	}
	if (ii == p)
		cout << "Число b не простое " << endl;
	else
		cout << "Число b простое " << endl;

	cout << "НОД числа равен - " << NOD(number_a, number_b);
	system("pause");
}

void BinarySystem()
{
	int j, kk, l = 0;
	cout << "Введите число больше 0 "; cin >> j;
	for (kk = 0; j > 0; kk++) {
		l += (j % 2) * pow(10, kk);
		j /= 2;
	}
	cout << "Двоичная форма числа = " << l << endl;
}

int main()
{
	rectangle();
	fibonacci_and_factorial();
	
	simple_or_not_and_NOD();

	BinarySystem();
	
	return 0;
}

