#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
		{
			return false;
		}
		++i;
	}
	return true;
}
int main()
{
	int num,k=0;
	cin >> num;
	if (is_prime(num))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << "0~200内的所有素数为：" << endl;
	for (int i = 2; i <= 200; i++)
	{
		if (is_prime(i))
		{
			cout << i << "\t";
			k++;
			if (k % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	return 0;
}