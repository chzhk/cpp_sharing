// двумерные
#include <iostream>
using namespace std;

// Задача 15 (доделать генератор)
int main() {
	setlocale(LC_ALL, "RUS");
	int n, count;
	// create
	cin >> n;
	count = n;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < n; q++) {
			mas[i][q] = i + 1; // подумать, как влияет изменение q и i в циклах местами
		}
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < n; q++) {
			cout << mas[i][q] << " ";
		}
		cout << endl;
	}

	cout << "----" << endl;

	for (int i = 0; i < count;) {
		int kol = 0;
		for (int q = 0; q < n; q++) {
			if (mas[i][q] % 2 != 0) {
				kol += 1;
			}
		}
		if (kol == n) {
			for (int q2 = 0; q2 < n; q2++) {
				for (int i2 = i; i2 < count-1; i2++) {
					mas[i2][q2] = mas[i2 + 1][q2];
				}
			}
			count -= 1;
			delete[] mas[count];
		}
		else i += 1;
	}

	for (int i = 0; i < count; i++) {
		for (int q = 0; q < n; q++) {
			cout << mas[i][q] << " ";
		}
		cout << endl;
	}
}