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
    cout << "输入数组大小: ";
    cin >> size;
    int* dynamicArray = new int[size];
    cout << "输入" << size << "个数组元素:";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }
    for (int i = 0; i < size; i++) {
        cout << *(dynamicArray + i) << " ";
    }
    cout << endl;
    sort(dynamicArray, size);
    cout << "排序后的数组元素: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    return 0;
}