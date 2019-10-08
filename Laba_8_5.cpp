using namespace std;

#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите число: ";
	cin >> A;
	if (A == 0) { cout << "Нулеыое число"; }
	else if (A > 0) {
		cout << "Положительное ";
	}
	else {
		cout << "Отрицательное ";
	};
	if ((abs(A) % 10 == 0) || (abs(A) % 10 == 2) || (abs(A) % 10 == 4) || (abs(A) % 10 == 6) || (abs(A) % 10 == 8)) {
		cout << "четное число";
	}
	else { cout << "нечетное число"; };
}