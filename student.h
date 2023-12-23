#pragma once
class Student              //ÀàÉùÃ÷
{
public:       
	Student();
	Student(int n, const char* na, char s);
	void set_value(int n, const char* na, char s);
	void display();
private:
	int num;
	char name[20];
	char sex;
};