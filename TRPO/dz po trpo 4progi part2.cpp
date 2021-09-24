#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	int month;
	cout << "i need you number \n";
	cin >> month;
	switch (month)//это будет кейс который выводит месяц
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
	
	int TOTY;
	TOTY = month;
	switch (TOTY)// а сейчас сделаем кейс, который будет выводить пору года
	{
	case 1,2,12:
		cout << "winter";
		break;
	case 3,4,5:
		cout << "spring";
		break;
	case 6,7,8:
		cout << "summer";
		break;
	case 9,10, 11:
		cout << "Autumn";
		break;
	} 
	
	return 0;
}
