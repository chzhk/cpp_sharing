#include <iostream>
using namespace std;

// Задача номер 7
int main() {
	setlocale(LC_ALL, "RUS");
	int n, count, max;
	cin >> n;
	count = n;
	int* mas = new int[n];
	cin >> mas[0];
	max = mas[0];
	for (int i = 1; i < count; i++) {
		cin >> mas[i];
		if (mas[i] > max) {
			max = mas[i];
		}
	}
	// удалить все максимальные элементы
	for (int i = 0; i < count;) {
		if (mas[i] == max) {
			for (int i2 = i; i2 < count-1; i2++) {
				mas[i2] = mas[i2 + 1];
			}
			count -= 1;
		}
		else {
			i++; // !!!!!!!!!!!!!!!!!!!1
				 // и в задаче 3 так же сделать нужно
		}
		for (int i = 0; i < count; i++) {
			cout << mas[i] << " ";
		}
		cout << endl;
	}
}