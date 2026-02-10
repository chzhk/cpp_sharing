// двумерные
#include <iostream>
using namespace std;

// Задача 7 (доделать генератор)
int main() {
	setlocale(LC_ALL, "RUS");
	int n, count;
	// create
	cin >> n;
	count = n;
	int** mas = new int* [n];
	for (int i = 0; i < 2 * n; i++) {
		mas[i] = new int[2*n];
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < n; q++) {
			mas[q][i] = i + 1; // подумать, как влияет изменение q и i в циклах местами
		}
	}
	for (int q = n; (q < 2 * n) && (q >= n); q++) {
		for (int i = 0; i < n; i++) {
			mas[i][q] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < 2 * n; q++) {
			cout << mas[i][q] << " ";
		}
		cout << endl;
	}

	cout << "----" << endl;

	for (int q = 0; q < count;) {
		int kol = 0;
		for (int i = 0; i < n; i++) {
			if (mas[i][q] % 2 != 0) {
				kol += 1;
			}
		}
		if (kol == n) {
			for (int i2 = 0; i2 < n; i2++) {
				for (int q2 = count - 1; q2 > q - 1; q2--) {
					mas[i2][q2 + 1] = mas[i2][q2];
				}
			}
			for (int i2 = 0; i2 < n; i2++) {
				mas[i2][q] = 0;
			}
			q += 2;
			count += 1;
		}
		else q += 1;
	}

	for (int i = 0; i < n; i++) {
		for (int q = 0; q < count; q++) {
			cout << mas[i][q] << " ";
		}
		cout << endl;
	}
}