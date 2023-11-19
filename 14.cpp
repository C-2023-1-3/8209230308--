#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in Oct unsigned  int type:" << oct << testUnint << endl;
	cout << "output in Oct int type:" << oct << static_cast<int>(testUnint) << endl;
	system("pause");
	return 0;
}