#include<iostream>
using namespace std;
class Rectangular {
private:
	double length;
	double width;
	double height;
public:
	void setDimensions(double l, double w, double h)
	{
		length = l; width = w; height = h;
	}
	double calculatevolume() {
		return length * width * height;
	}
};
int main() {
	Rectangular cuboids[3];
	double l, w, h;
	for(int i=0;i<3;i++)
	{
		cout << "�������" << (i + 1) << "��������ĳ�������:";
		cin >> l>> w >> h;
		cuboids[i].setDimensions(l, w, h);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << (i + 1) << "������������Ϊ" << cuboids[i].calculatevolume() << endl;;
	}
	return 0;
}