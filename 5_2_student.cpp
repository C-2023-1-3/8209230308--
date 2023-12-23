
#include <iostream>
#include "student.h "   
using namespace std;
Student::Student() {
    num = 0;
    strcpy_s(name, "");
    sex = '\0';
}
Student::Student(int n, const char* na, char s) {
    num = n;
    strcpy_s(name, na);
    sex = s;
}
void Student::set_value(int n, const char* na, char s){
    num = n;
    strcpy_s(name, na);
    sex = s;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}