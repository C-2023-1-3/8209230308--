#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	string s;
	int lettercout = 0, spacecout = 0, digitcout = 0, othercout = 0;
	getline(cin, s);
	for (char ch : s)
	{
		if (isalpha(ch))
		{
			lettercout++;
		}
		else if (isspace(ch)) {
			spacecout++;
		}
		else if (isdigit(ch))
		{
			digitcout++;
		}
		else {
			othercout++;
		}
	}
	cout << "Ӣ����ĸ�ĸ���" << lettercout << endl;
	cout << "�ո�ĸ���" << spacecout << endl;
	cout << "�����ַ��ĸ���" << digitcout << endl;
	cout << "�����ַ��ĸ���" << othercout << endl;
	return 0;
}

		



