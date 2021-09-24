#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	int a, b, c, num;
	cout << "write the number:" << endl;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "even " << endl;
	}
	else
	{
		cout << "odd " << endl;
	}

	a = num % 10;
	b = num / 10 % 10;
	c = num / 100;
	cout << (a + b + c) / 3.0 << endl;

	system("pause");
	return 0;
}
