#include<iostream>
using namespace std;
int main()
{
	double a, b, c, l;
	cout << "���������ε������߳�:";
	cin >> a >> b >> c;
	if ((a + b<c || a - b>c) && (a + c<b || a - c>b) && (b + c<a || b - c>a))
		cout << "�������޷����������Σ�����������" << endl;
	else {
		l = a + b + c;
		cout << "���������ܳ�Ϊ" << l << endl;
	}
	if (a == b || b == c || c == a)
		cout << "��������Ϊ����������" << endl;
	else
		cout << "�������β��ǵ���������" << endl;
	return 0;
}