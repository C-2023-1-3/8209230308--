#include<iostream>
using namespace std;
int calPeaches(int day) {
    if (day == 10) {
        return 1;
    }
    else {
        int peaches = (calPeaches(day + 1) + 1) * 2;
        return peaches;
    }
}
int main() {
    int totalPeaches = calPeaches(1);
    cout << "��һ����ӹ�ժ�� " << totalPeaches << " ������" << endl;
    return 0;
}