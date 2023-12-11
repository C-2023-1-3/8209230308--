#include <iostream>
using namespace std;
void bubblesort(double a[]) {
int	len = sizeof(a);
for (int i = 0; i < len - 1; i++) {
	for (int j = 0; j < len - 1; j++)
	{
		if (a[j] > a[j + 1])
		{
			double temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
}
}
int main() {
double numbers[10];
for (int i = 0; i < 10; i++) {
	cin >> numbers[i];
}
bubblesort(numbers);
	for (int i = 0; i < 10; i++) {
	cout << numbers[i] << " ";
}
	cout << endl;
return 0;
}
