#include <iostream>
using namespace std;
int main() {
char op;
double num1, num2, result;

cout << "�������һ����������";
cin >> num1;

cout << "�������������+ - * / %����";
cin >> op;

cout << "������ڶ�����������";
cin >> num2;

switch (op) {
case '+':
    result = num1 + num2;
    break;
case '-':
    result = num1 - num2;
    break;
case '*':
    result = num1 * num2;
    break;
case '/':
    if (num2 == 0) {
        cout << "���󣺳�������Ϊ0��" << endl;
        return 0;
    }
    result = num1 / num2;
    break;
case '%':
    if (num2 == 0) {
        cout << "���󣺳�������Ϊ0��" << endl;
        return 0;
    }
    result = static_cast<int>(num1) % static_cast<int>(num2);
    break;
default:
    cout << "���󣺷Ƿ��������" << endl;
    return 0;
}
cout << "������Ϊ��" << result << endl;
return 0;
}