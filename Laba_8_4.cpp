using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "Введите координаты точки: ";
	cin >> x >> y;
	if ((x > 0) & (y > 0)) {
		cout << "Точка лежит в 1 четверти";
	}
	else if ((x < 0) & (y > 0)) {
		cout << "Точка лежит во 2 четверти";
	}
	else if ((x < 0) & (y < 0)) {
		cout << "Точка лежит в 3 четверти";
	}
	else if ((x > 0) & (y < 0)) {
		cout << "Точка лежит в 4 четверти";
	}
	else { cout << "Точка лежит на какой-либо оси"; };
}