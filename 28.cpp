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
		cout << "a��ƽ����Ϊ " << 0 << endl;
	}
	else if (a < 0)
		cout << "����û��ƽ����" << endl;
	else {
		double x = squareroot(a);
		cout << x << endl;
	}
	return 0;
}