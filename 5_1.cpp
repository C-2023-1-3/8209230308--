#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              
		int hour;
	int minute;
	int sec;
public:
	void getTime() // ��Ա�����������ʱ��
	{
		cout << hour << "��" << minute << "��" << sec << endl;
	}
	void setTime() // ��Ա������������ʱ��
	{
		cin >> hour >> minute >> sec;
	}
};
int main()
{
	Time tl;  
	tl.setTime();
	tl.getTime();
	return 0;
}