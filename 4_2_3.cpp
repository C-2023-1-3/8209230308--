#include <iostream>
using namespace std;
void sort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "���������С: ";
    cin >> size;
    int* dynamicArray = new int[size];
    cout << "����" << size << "������Ԫ��:";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }
    for (int i = 0; i < size; i++) {
        cout << *(dynamicArray + i) << " ";
    }
    cout << endl;
    sort(dynamicArray, size);
    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    return 0;
}