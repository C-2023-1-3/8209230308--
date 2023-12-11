#include<iostream>
using namespace std;
#define nums 100
int main() {
	bool cabinet[nums] ;
	for (int i = 0; i < nums; i++)
	{
		cabinet[i] = false;
}
	for (int student = 1; student <= nums; student++)
	{
		for (int locker = student-1; locker < nums; locker++)
			if ((locker +1)% student == 0)
				cabinet[locker] = !cabinet[locker];
	}
	cout << "开着的柜子号码为：";
	for (int i = 0; i < nums; i++)
		if (cabinet[i])
			cout << i +1<< "\t";
	return 0;
}

