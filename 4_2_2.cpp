#include<iostream>
#include<cstring>
using namespace std;

int parseHex(const char* const hexString);

int main()
{
    int size = 999;
    char* s = new char[size];
    cout << "Please enter a number in hexChar : ";
    cin.getline(s, size);
    cout <<  parseHex(s) <<endl;

    delete[] s;
    return 0;
}

int parseHex(const char* const hexString)
{
    int a, sum = 0;
    a = strlen(hexString);
    int* list = new int[a];
    for (int i = 0; i < a; i++)
    {
        if (hexString[i] >= 'A' && hexString[i] <= 'F')
            list[i] = (static_cast<int>(hexString[i]) - 'A' + 10) << (4 * (a - 1 - i));
        else
            list[i] = (hexString[i] - '0') << (4 * (a - 1 - i));
        sum = sum + list[i];
    }
    delete[] list;
    return sum;
}
