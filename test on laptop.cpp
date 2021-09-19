#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	string a;
	
	cout << "if you want say hello, if you song - say song \n";
	cin >> a;
	if (a == "hello")
		cout << "Hello World";
	else
		if (a == "song")
			cout << "some bode was told me the world is gona roll me";
		else cout << "uncnown command";
	return 0;

}