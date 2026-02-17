#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n; // кол-во чисел в векторе
	cout << "Введите N: ";
	cin >> n;
	vector<int> vec; // инициализируем вектор
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		vec.push_back(rand() % 7); // наполняем вектор случайными числами
	}
	cout << "Исходный вектор: ";
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}

	vector<int>::iterator mx = max_element(vec.begin(), vec.end());
	// https://cppreference.com/w/cpp/algorithm/max_element.html
	cout << endl << "Максимальный элемент: " << *mx << endl;

	replace(vec.begin(), vec.end(), *mx, -*mx);

	cout << "Новый вектор: ";
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
