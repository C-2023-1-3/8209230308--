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
    cout << "第一天猴子共摘了 " << totalPeaches << " 个桃子" << endl;
    return 0;
}