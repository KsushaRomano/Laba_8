using namespace std;

#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите число: ";
	cin >> A;
	if ((abs(A) % 10 == 0) || (abs(A) % 10 == 2) || (abs(A) % 10 == 4) || (abs(A) % 10 == 6) || (abs(A) % 10 == 8)) {
		cout << "Четное ";
	}
	else { cout << "Нечетное "; };
	if (A < 10) {
	cout << "однозначное число ";
	}
	else if ((A > 10) & (A < 100)) {
		cout << "двузначное число ";
	}
	else if ((A > 101) & (A < 1000)) {
		cout << "трехзначное число ";
	}
	else {
		cout << "число, выходящее за диапазон ";
	}
}