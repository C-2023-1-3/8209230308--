#include<iostream>
using namespace std;
class Point {
private:
	int x;
int y;
public:
	Point() {
		x = 60; y = 80;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "当前坐标值为：(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p1;
	p1.display();
	p1.setPoint(3, 4);
	p1.display();
	return 0;
}
