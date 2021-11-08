#include "pch.h"
#include <iostream>
#include "math.h"

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
	case 1: even_or_odd(num); break;
	case 2: medium_of_number(a, num, b, c); break;
	default: cout << "введите число из меню ";
		break;
	}
	system("pause");

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
	{
	case 1:  cout << "winter"; break;
	case 2:  cout << "winter"; break;
	case 12: cout << "winter"; break;
	case 4:  cout << "spring"; break;
	case 3:  cout << "spring"; break;
	case 5:  cout << "spring"; break;
	case 8:  cout << "summer"; break;
	case 7:  cout << "summer"; break;
	case 6:  cout << "summer"; break;
	case 9:  cout << "Autumn"; break;
	case 11: cout << "Autumn"; break;
	case 10:cout << "Autumn"; break;
	default: cout << "unknown mouth";
	}
}

void Task3_4()
{
	int month;
	int TOTY;
	int menu;

	cout << "введите число \n";
	cin >> month;
	TOTY = month;
	cout << "что нужно сделать с ним?\n —казать какой мес€ц? - 1 \n сказать кака€ пора года? - 2 " << endl;
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
	setlocale(LC_ALL, "Russian");
	int menu;
	cout << " акое задание вылн€ть будем, господин?" << endl; cin >> menu;
	switch (menu)
	{
		case 1: Task1_2(); break;
		case 2: Task1_2(); break;
		case 4: Task3_4(); break;
		case 3: Task3_4(); break;
		default: cout << " € такого не знаю, € способен сделать с 1 по 4 :(" << endl;
		
	}
}