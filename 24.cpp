#include <iostream>
using namespace std;
int main() {
char op;
double num1, num2, result;

cout << "请输入第一个操作数：";
cin >> num1;

cout << "请输入运算符（+ - * / %）：";
cin >> op;

cout << "请输入第二个操作数：";
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
        cout << "错误：除数不能为0。" << endl;
        return 0;
    }
    result = num1 / num2;
    break;
case '%':
    if (num2 == 0) {
        cout << "错误：除数不能为0。" << endl;
        return 0;
    }
    result = static_cast<int>(num1) % static_cast<int>(num2);
    break;
default:
    cout << "错误：非法运算符。" << endl;
    return 0;
}
cout << "运算结果为：" << result << endl;
return 0;
}