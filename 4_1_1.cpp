#include<iostream>
using namespace std;
#define N 10
bool isDuplicate(int arr[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			return true;
		}
	}
	return false;
}
int main() {
	int a[N], unique[N];
	int uniquecount = 0;
	cout << "Enter ten unmbers:";
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++) {
		if (!isDuplicate(unique, uniquecount, a[i])) {
			unique[uniquecount] = a[i];
			uniquecount++;
		}
	}
	cout << "The unique numbers are:";
	for (int i = 0; i < uniquecount; i++) {
		cout << unique[i] << " ";
	}
	return 0;
}