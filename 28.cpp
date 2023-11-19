#include<iostream>
#include<cmath>
using namespace std;
double squareroot(double a) {
	double x = a;
	while (true)
	{
		double xn = (x + a/ x) / 2;
		if (fabs(xn - x) < (1e-5))
			break;
		x = xn;
	}
	return x;
}
int main()
{
	double a;
	cin >> a;
	if (a == 0)
	{
		cout << "a的平方根为 " << 0 << endl;
	}
	else if (a < 0)
		cout << "负数没有平方根" << endl;
	else {
		double x = squareroot(a);
		cout << x << endl;
	}
	return 0;
}