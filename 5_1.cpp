#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              
		int hour;
	int minute;
	int sec;
public:
	void getTime() // 成员函数用于输出时间
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
	void setTime() // 成员函数用于输入时间
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