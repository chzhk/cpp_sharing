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

	vector<int> veconlych;
	copy_if(vec.begin(), vec.end(), back_inserter(veconlych), [](int x) { return x % 2 == 0; });
	// https://cppreference.com/w/cpp/algorithm/copy.html

	cout << endl << "Новый вектор: ";
	for (vector<int>::iterator it = veconlych.begin(); it != veconlych.end(); it++) {
		cout << *it << " ";
	}

	vector<int> VOCrotated;
	vector<int>::iterator mnVCr = min_element(veconlych.begin(), veconlych.end());
	cout << "\nMIN: " << *mnVCr;
	rotate_copy(veconlych.begin(), mnVCr, veconlych.end(), back_inserter(VOCrotated));
	// https://cppreference.com/w/cpp/algorithm/rotate_copy.html
	cout << endl << "Повёрнутый вектор: ";
	for (vector<int>::iterator it = VOCrotated.begin(); it != VOCrotated.end(); it++) {
		cout << *it << " ";
	}

	sort(VOCrotated.begin(), VOCrotated.end());
	cout << endl << "Отсортированный вектор: ";
	for (vector<int>::iterator it = VOCrotated.begin(); it != VOCrotated.end(); it++) {
		cout << *it << " ";
	}

	cout << endl << "Введите элемент, который хотите вставить: ";
	int X;
	cin >> X;
	auto ITequalorup = lower_bound(VOCrotated.begin(), VOCrotated.end(), X);
	// https://cppreference.com/w/cpp/algorithm/lower_bound.html
	VOCrotated.insert(ITequalorup, X);
	cout << endl << "Вставили элемент так, чтобы вектор остался отсортированным: ";
	for (vector<int>::iterator it = VOCrotated.begin(); it != VOCrotated.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}
