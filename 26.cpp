#include<iostream>
using namespace std;
int Maxgys (int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return Maxgys(b, a % b);
}
int Maxgbs(int a, int b)
{
	return a * b / Maxgys(a, b);
}
int a, b;
int main() {
	cin >> a >> b;
	if (a == 0 || b == 0 || (a == 0 && b == 0))
	{
		cout<<"0��Լ��";
	}
	else {
		cout << "���Լ��Ϊ" << Maxgys(a, b) << endl;
		cout << "��󹫱���Ϊ" << Maxgbs(a, b) << endl;
	}
	return 0;
}






