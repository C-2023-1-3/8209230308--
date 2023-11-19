#include<iostream>
using namespace std;
int main()
{
	double a, b, c, l;
	cout << "输入三角形的三条边长:";
	cin >> a >> b >> c;
	if ((a + b<c || a - b>c) && (a + c<b || a - c>b) && (b + c<a || b - c>a))
		cout << "此三边无法构成三角形，请重新输入" << endl;
	else {
		l = a + b + c;
		cout << "此三角形周长为" << l << endl;
	}
	if (a == b || b == c || c == a)
		cout << "此三角形为等腰三角形" << endl;
	else
		cout << "此三角形不是等腰三角形" << endl;
	return 0;
}