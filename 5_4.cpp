#include<iostream>
using namespace std;
class Student {
private:
	int id;
	double score;
public:
	Student(int x, double y)
	{
		id = x;
		score = y;
	}
	void max(Student*);
};
void Student::max(Student* p) {
	for (int i = 0; i < 5; i++) {
		int k = 0;
		for (int j = 0; j < 5; j++) {
			if ((p + i)->score >= (p + j)->score)
				k++;
			if (k == 5) {
				cout << "最高成绩为:" << (p + i)->score << endl;
				cout << "学生学号为:" << (p + i)->id;
				break;
			}
		}
		if (k == 5) break;
	}
}
int main() {
	Student a[5] = {
		Student(1,90),
		Student(2,80),
		Student(3,100),
		Student(4,60),
		Student(5,70)
	};
	a->max(a);
	return 0;
}

	
