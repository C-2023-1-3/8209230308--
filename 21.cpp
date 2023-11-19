#include<iostream>
using namespace std;
int main()
{
	
	char ch,upperch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		upperch = ch - 32;
		cout << upperch << endl;
	}
	else
		cout << static_cast<int>(ch + 1 )<< endl;
	return 0;
}