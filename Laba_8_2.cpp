using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;
	if (((a + b) > (b + c)) & ((a + b) > (a + c))) {
		cout << "Сумма наибольших двух элементов равна: " << a + b;
	}
	else if (((a + c) > (b + c)) & ((a + c) > (a + b))) {
		cout << "Сумма наибольших двух элементов равна: " << a + c;
	}
	else {
		cout << "Сумма наибольших двух элементов равна: " << b + c;
	}
}