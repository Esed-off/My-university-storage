#include "pch.h"
#include <iostream>
#include "math.h"
#include "Hello world!.h"
using namespace std;

void even_or_odd(int num)
{
	if (num % 2 == 0)
	{
		cout << "even " << endl;
	}
	else
	{
		cout << "odd " << endl;
	}
}

void medium_of_number(int& a, int num, int& b, int& c)
{
	a = num % 10;
	b = num / 10 % 10;
	c = num / 100;
	cout << (a + b + c) / 3.0 << endl;
}

void Task1_2()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, num, menu;
	cout << "write the number:" << endl;
	cin >> num;
	cout << "что нужно сделать с числом \n проверить четность ? - 1 \n найти среднее арифмитическое ? - 2" << endl; cin >> menu;
	switch (menu)
	{
	case 1: even_or_odd(num);
	case 2: medium_of_number(a, num, b, c);
	default: cout << "введите число из меню ";
		break;
	}
	system("pause");
	return 0;
}

void Month(int month)
{
	switch (month)//это будет кейс который выводит мес€ц
	{
	case 1:
		cout << "its january\n";
		break;
	case 2:
		cout << "its february\n";
		break;
	case 3:
		cout << "its march\n";
		break;
	case 4:
		cout << "its april\n";
		break;
	case 5:
		cout << "its may\n";
		break;
	case 6:
		cout << "its june\n";
		break;
	case 7:
		cout << "its july\n";
		break;
	case 8:
		cout << "its august\n";
		break;
	case 9:
		cout << "its september\n";
		break;
	case 10:
		cout << "its october\n";
		break;
	case 11:
		cout << "its november\n";
		break;
	case 12:
		cout << "its december\n";
		break;
	default:
		cout << "Houston, we have a problem!\n";
	}
}

void Time_of_the_year(int TOTY)
{
	switch (TOTY)
	case 1, 2, 12:
		cout << "winter";
		break;
	case 3, 4, 5:
		cout << "spring";
		break;
	case 6, 7, 8:
		cout << "summer";
		break;
	case 9, 10, 11:
		cout << "Autumn";
		break;
}

void Task3_4()
{
	int month;
	int TOTY;
	int menu;

	cout << "введите число \n";
	cin >> month;
	TOTY = month;
	cout << "что нужно сделать с ним?\n —казать какой мес€ц? - 1 \n сказать кака€ пора года? - 2 " << end;
	cin >> menu;
	switch (menu)
	{
	case 1:  Month(month); break;
	case 2:  Time_of_the_year(TOTY); break;
	default: cout << "введите правильный номер задани€"; break;

	}
}

int main()
{
	int menu;
	cout << " акое задание вылн€ть будем, господин?" << endl; cin >> menu;
	switch (menu)
	{
	case 1,2: Task1_2(); break;
	case 3,4: Task3_4(); break;
	default: cout << " € такого не знаю, € способен сделать с 1 по 4 :(" << endl;
		
	}
	
	

	
	
	
   
	}