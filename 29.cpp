#include<iostream>
using namespace std;
int main()
{
	float price = 0.8;
	int day = 0, applecout = 0, apple = 2;
	while (apple + applecout <= 100)
	{
		applecout += apple;
		day++;
		apple *= 2;
	}
	double n = applecout * price / day;
	cout << "ƽ��ÿ�컨" << n << "Ԫ" << endl;
	return 0;
}

