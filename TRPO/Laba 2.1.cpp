#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int vis, sh, i, s, pl;
	cout << "������� ������ ";
	cin >> vis;
	cout << "������� ������ ";
	cin >> sh;
	while(s < vis) 
	{
		
		while (i < sh)
		{
			cout << "*";
			++i;
		}
		i = 0;
		cout << endl;
		s=s+1;
	
	}
	pl = vis * sh;
	cout << "������� ��������������� ����� - ";
	cout << pl;
	return 0;
}
