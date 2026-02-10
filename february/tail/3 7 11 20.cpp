#include <iostream>
using namespace std;

//// Задача номер 20
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, count, p, x;
//	cin >> n;
//	cout << "X = ";
//	cin >> x;
//	count = n;
//	int* mas = new int[n*2];
//	for (int i = 0; i < count; i++) {
//		cin >> mas[i];
//	}
//	// вставить после минимальных элементов 0
//	for (int i = 0; i < count;) {
//		if (mas[i] % x == 0) {
//			for (int i2 = count-1; i2 > i; i2--) {
//				mas[i2 + 1] = mas[i2];
//			}
//			count += 1;
//			mas[i + 1] = x;
//			i += 2; // перепрыгиваем курсор на два элемента вперёд (на третий), чтобы не захватить данный и ноль случайно (не прибавлять бесконечно)
//		}
//		else {
//			i += 1; // данный элемент не кратен X? - переходим к следующему
//				 
//		}
//		for (int i = 0; i < count; i++) {
//			cout << mas[i] << " ";
//		}
//		//cin >> p;
//		cout << endl;
//	}
//}


//// Задача номер 11
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, count, min, p;
//	cin >> n;
//	count = n;
//	int* mas = new int[n*2];
//	cin >> mas[0];
//	min = mas[0];
//	for (int i = 1; i < count; i++) {
//		cin >> mas[i];
//		if (mas[i] < min) {
//			min = mas[i];
//		}
//	}
//	// вставить после минимальных элементов 0
//	for (int i = 0; i < count;) {
//		if (mas[i] == min) {
//			for (int i2 = count-1; i2 > i; i2--) {
//				mas[i2 + 1] = mas[i2];
//			}
//			count += 1;
//			mas[i + 1] = 0;
//			i += 2; // перепрыгиваем курсор на два элемента вперёд (на третий), чтобы не захватить данный и ноль случайно (не прибавлять бесконечно)
//		}
//		else {
//			i += 1; // данный элемент не минимальный? - переходим к следующему
//				 
//		}
//		for (int i = 0; i < count; i++) {
//			cout << mas[i] << " ";
//		}
//		//cin >> p;
//		cout << endl;
//	}
//}

//// Задача номер 7
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, count, max;
//	cin >> n;
//	count = n;
//	int* mas = new int[n];
//	cin >> mas[0];
//	max = mas[0];
//	for (int i = 1; i < count; i++) {
//		cin >> mas[i];
//		if (mas[i] > max) {
//			max = mas[i];
//		}
//	}
//	// удалить все максимальные элементы
//	for (int i = 0; i < count;) {
//		if (mas[i] == max) {
//			for (int i2 = i; i2 < count-1; i2++) {
//				mas[i2] = mas[i2 + 1];
//			}
//			count -= 1;
//		}
//		else {
//			i++; // !!!!!!!!!!!!!!!!!!!1
//				 // и в задаче 3 так же сделать нужно
//		}
//		for (int i = 0; i < count; i++) {
//			cout << mas[i] << " ";
//		}
//		cout << endl;
//	}
//}

// Задача номер 3
//int main() {
//	setlocale(LC_ALL, "RUS");
//	int n, count;
//	cin >> n;
//	count = n;
//	int* mas = new int[n];
//	for (int i = 0; i < count; i++) {
//		cin >> mas[i];
//	}
//	// удалить чётные элементы
//	for (int i = 0; i < count; i++) {
//		if (mas[i] % 2 == 0) {
//			mas[i] = 0;
//			for (int i2 = i; i2 < count-1; i2++) {
//				mas[i2] = mas[i2+1];
//			}
//			count -= 1;
//		}
//		for (int i = 0; i < count; i++) {
//			cout << mas[i] << " ";
//		}
//		cout << endl;
//	}
//}