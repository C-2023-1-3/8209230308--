#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;
	double r, h, V;
	cin >> r >> h;
	V = (PI * r * r * h) / 3;
	cout << "圆锥的体积为：" << V << endl;
	return 0;
}