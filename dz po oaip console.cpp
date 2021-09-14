#include <iostream>
using namespace std;
int main()
{
	double x, y, z, a, b, c, d, r, h;

	cout << "write x_";	cin >> x;
	cout << "write y_";	cin >> y;
	cout << "write z_";	cin >> z;
	a = exp(fabs(x - y));
	b = pow(fabs(x - y), (x + y));
	c = atan(x) + atan(z);
	d = pow(log(y), 2) + pow(x, 6);
	h = pow(d, 1 / 3.);
	r = a * b / c + d;
	cout << r;


}

