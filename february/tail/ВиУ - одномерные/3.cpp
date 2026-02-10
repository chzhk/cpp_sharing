#include <iostream>
using namespace std;

// Задача номер 3
int main() {
	setlocale(LC_ALL, "RUS");
	int n, count;
	cin >> n;
	count = n;
	int* mas = new int[n];
	for (int i = 0; i < count; i++) {
		cin >> mas[i];
	}
	// удалить чётные элементы
	for (int i = 0; i < count; i++) {
		if (mas[i] % 2 == 0) {
			mas[i] = 0;
			for (int i2 = i; i2 < count-1; i2++) {
				mas[i2] = mas[i2+1];
			}
			count -= 1;
		}
		for (int i = 0; i < count; i++) {
			cout << mas[i] << " ";
		}
		cout << endl;
	}
}