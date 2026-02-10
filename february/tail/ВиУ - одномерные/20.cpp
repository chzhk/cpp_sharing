#include <iostream>
using namespace std;

// Задача номер 20
int main() {
	setlocale(LC_ALL, "RUS");
	int n, count, p, x;
	cin >> n;
	cout << "X = ";
	cin >> x;
	count = n;
	int* mas = new int[n*2];
	for (int i = 0; i < count; i++) {
		cin >> mas[i];
	}
	// вставить после минимальных элементов 0
	for (int i = 0; i < count;) {
		if (mas[i] % x == 0) {
			for (int i2 = count-1; i2 > i; i2--) {
				mas[i2 + 1] = mas[i2];
			}
			count += 1;
			mas[i + 1] = x;
			i += 2; // перепрыгиваем курсор на два элемента вперёд (на третий), чтобы не захватить данный и ноль случайно (не прибавлять бесконечно)
		}
		else {
			i += 1; // данный элемент не кратен X? - переходим к следующему
				 
		}
		for (int i = 0; i < count; i++) {
			cout << mas[i] << " ";
		}
		//cin >> p;
		cout << endl;
	}
}