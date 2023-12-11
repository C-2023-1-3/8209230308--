
#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    int a, b;
    a = strlen(s1);
    b = strlen(s2);
    if (a > b)
    {
        return -1;
    }
    for (int i = 0; i <= b - a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j == a - 1 && s1[j] == s2[j + i])
            {
                return i;
            }
            if (s1[j] != s2[j + i])
            {
                break;
            }
        }
    }
    return -1;
}
int main()
{
    const int size = 9999;
    char s1[size], s2[size];
    cout << "Enter the first string:";
    cin.getline(s1, size);
    cout << "Enter the second string:";
    cin.getline(s2, size);
    cout << "indexof(" << s1 << "," << s2 << ")is" << " "<< indexof(s1, s2);
    return 0;
}