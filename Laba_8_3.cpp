using namespace std;

#include <math.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a1, a2, b1, b2, c1, c2, AB, AC;
	cout << "Введите координаты х и у точки А: ";
	cin >> a1 >> a2 ;
	cout << "Введите координаты х и у точки B: ";
	cin >> b1 >> b2;
	cout << "Введите координаты х и у точки C: ";
	cin >> c1 >> c2;
	AB = sqrt(abs(pow((b1 - a1), 2)) + abs(pow((b2 - a2), 2)));
	AC = sqrt(abs(pow((c1 - a1), 2)) + abs(pow((c2 - a2), 2)));
	if (AB > AC) {
		cout << "К точке А ближе точка В" << endl;
		cout << "Расстояние равно " << AB;
	}
	else if (AC > AB) {
		cout << "К точке А ближе точка C" << endl;
		cout << "Расстояние равно " << AC;
	}
	else {
		cout << "Точки В и С равноудалены от точки А" << endl;
		cout << "Расстояние равно " << AC;
	}
}