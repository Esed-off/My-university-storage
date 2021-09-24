#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	string a;
	
	cout << "if you want say hello - write hello, if you song - write song \n";
	cin >> a;
	if (a == "hello")
		cout << "Hello World";
	else
		if (a == "song")
			cout << "some body was told me the world is gona roll me";//жаль я не знаю как вставить сюда видос их шрека
		else cout << "uncnown command";
	return 0;

}