#include <iostream>
#include <cstring>
void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            ++counts[s[i] - 'a'];
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            ++counts[s[i] - 'A'];
        }
    }
}
int main() {
    const int alphabetSize = 26;
    int counts[alphabetSize] = { 0 };
    char s[100];
    std::cout << "Enter a string:";
    std::cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < alphabetSize; ++i) {
        if (counts[i] != 0) {
            std::cout << (char)('a' + i) << ": " << counts[i]<<" " << "times" << std::endl;
        }
    }
    return 0;
}
