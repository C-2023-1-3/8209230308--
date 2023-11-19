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
	cout << "英文字母的个数" << lettercout << endl;
	cout << "空格的个数" << spacecout << endl;
	cout << "数字字符的个数" << digitcout << endl;
	cout << "其他字符的个数" << othercout << endl;
	return 0;
}

		



