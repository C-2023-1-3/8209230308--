#include<iostream>
using namespace std;
int main()
{
	const char c = '*';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << c ;
		cout << endl;
	}
	return 0;
}