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
		cout << "请输入第" << (i + 1) << "个长方体的长、宽、高:";
		cin >> l>> w >> h;
		cuboids[i].setDimensions(l, w, h);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << (i + 1) << "个长方体的体积为" << cuboids[i].calculatevolume() << endl;;
	}
	return 0;
}