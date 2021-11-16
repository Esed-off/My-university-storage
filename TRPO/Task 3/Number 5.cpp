#include <iostream>
#include <ctime>
#include "math.h"
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	int num;

	for (int i = 0; i < 1000; i++)
	{
		num = rand() % 10;
		switch (num)
		{
		case 0: zero++; break;
		case 1: one++; break;
		case 2: two++; break;
		case 3: three++; break;
		case 4: four++; break;
		case 5: five++; break;
		case 6: six++; break;
		case 7: seven++; break;
		case 8: eight++; break;
		case 9: nine++; break;
		default: cout << "wtf ?????"; break;
		}

	}

	
	
	
	cout << "zero  |";
	for (int i = 0; i < zero / 5; i++) 
	{
		cout << "*";
	}
	cout << endl;

	cout << "one   |";
	for (int i = 0; i < one / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "two   |";
	for (int i = 0; i < two / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "three |";
	for (int i = 0; i < three / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "four  |";
	for (int i = 0; i < four / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "five  |";
	for (int i = 0; i < five /5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "six   |";
	for (int i = 0; i < six / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "seven |";
	for (int i = 0; i < seven / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "eight |";
	for (int i = 0; i < eight / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "nine  |";
	for (int i = 0; i < nine / 5; i++)
	{
		cout << "*";
	}
	cout << endl;

}

















